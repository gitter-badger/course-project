using System;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Linq;
using System.Web;

namespace ServerSide.Models
{
    public class Question
    {
        [Key]
        public int QuestionId { get; set; }

        [DataType(DataType.MultilineText)]
        public string QuestionText { get; set; }

        public DateTime CreatedTime { get; private set; }

        public Question()
        {
            CreatedTime = DateTime.Now;
        }
    }
}