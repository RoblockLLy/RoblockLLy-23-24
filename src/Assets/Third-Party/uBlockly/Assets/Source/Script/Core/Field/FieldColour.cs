/****************************************************************************

Copyright 2016 sophieml1989@gmail.com

Licensed under the Apache License, Version 2.0 (the "License");
you may not use this file except in compliance with the License.
You may obtain a copy of the License at

    http://www.apache.org/licenses/LICENSE-2.0

Unless required by applicable law or agreed to in writing, software
distributed under the License is distributed on an "AS IS" BASIS,
WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
See the License for the specific language governing permissions and
limitations under the License.

****************************************************************************/

using System.Collections.Generic;
using System.Linq;
using System.Text.RegularExpressions;
using Newtonsoft.Json.Linq;

namespace UBlockly
{
    public sealed class FieldColour : Field
    {
        [FieldCreator(FieldType = "field_colour")]
        private static FieldColour CreateFromJson(JObject json)
        {
            string fieldName = json["name"].IsString() ? json["name"].ToString() : "FIELDNAME_DEFAULT";
            FieldColour field = new FieldColour(fieldName, json["colour"].ToString());
            if (json["options"] != null)
            {
                JArray options = json["options"] as JArray;
                field.mColorOptions = new string[options.Count];
                for (int i = 0; i < options.Count; i++)
                {
                    field.mColorOptions[i] = (string) options[i];
                }
            }
            return field;
        }

        private string mColor;
        private string[] mColorOptions;

        private static string[] DEFAULT_COLOR_OPTIONS =
        {
            "#FF0000", "#FF9900", "#FFF200", "#40FF00", "#00FFE1",
            "#0066FF", "#7700FF", "#FF4DF9", "#000000", "#6E3C00",
            
            //http://clrs.cc/
            "#828282", "#FFFFFF", /*"#001F3F", "#85144B", "#B10DC9",*/ 
        };
        
        /// <summary>
        /// Class for a colour input field.
        /// </summary>
        /// <param name="fieldName">The unique name of the field, usually defined in json block.</param>
        /// <param name="color">The initial colour in '#rrggbb' format.</param>
        public FieldColour(string fieldName, string color) : base(fieldName)
        {
            mColorOptions = DEFAULT_COLOR_OPTIONS;
            mColor = color;
            //this.SetText(Field.NBSP + Field.NBSP + Field.NBSP);
        }

        /// <summary>
        /// Return the current colour.
        /// </summary>
        /// <returns>Current colour in '#rrggbb' format.</returns>
        public override string GetValue()
        {
            return mColor;
        }

        /// <summary>
        /// Set the colour.
        /// </summary>
        /// <param name="newValue">The new colour in '#rrggbb' format.</param>
        public override void SetValue(string newValue)
        {
            if (string.IsNullOrEmpty(newValue))
            {
                // No change if null.
                return;
            }
            
            var oldValue = this.GetValue();
            if (string.Equals(oldValue.ToLower(), newValue.ToLower()))
                return;
            
            mColor = newValue;
            FireUpdate(mColor);
        }

        /// <summary>
        /// Get the text from this field.  Used when the block is collapsed.
        /// </summary>
        public override string GetText()
        {
            Regex rgx = new Regex(@"/^#(.)\1(.)\2(.)\3$/");
            Match match = rgx.Match(mColor);
            if (match.Success)
                return "#" + match.Value[1] + match.Value[2] + match.Value[3];
            return mColor;
        }
        
        /// <summary>
        /// Get the color options 
        /// </summary>
        public string[] GetOptions()
        {
            return mColorOptions;
        }
    }
}
