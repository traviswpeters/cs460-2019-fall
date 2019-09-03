---
layout: default
---

<p class="announcement">Class Announcement: We need a notetaker ASAP! Please contact the Office of Disability Services if interested.</p>

## About the Course

This course introduces students to the design of operating systems.
Students will be exposed to a wide variety of topics, including: processes, threads, concurrent programming, scheduling, memory, files, I/O management, and security issues.
The course will conclude with a series of advanced topics.

## Logistics

<img src="{{ site.data.settings.img }}" width="25%" height="auto" align="right">

**Lectures:** {{ site.data.settings.lectures }} <br/>
**Textbook:** {{ site.data.settings.textbook }} --- {{ site.data.settings.textbooklink }} <br/>
**D2L:** [{{ site.data.settings.d2l }}]({{ site.data.settings.d2l }}) <br/>

**Instructor:** {{ site.data.settings.instructor }} \| [{{site.data.settings.email}}](mailto:{{site.data.settings.email}}?subject={{site.data.settings.titlenum}}) \| {{site.data.settings.office}} <br/>
**Office Hours:** {{ site.data.settings.officehours }} <br/>

> If you'd like to meet with me outside of office hours, please contact me and we'll set up a time.
> Also, I hang around my office quite a bit so if my office door is open, feel free to drop in.  

**Grader:** Gerard Shu Fuhnwi \| [gerard.shufuhnwi@student.montana.edu](mailto:gerard.shufuhnwi@student.montana.edu) <br/>
**Office Hours:** Barnard Hall 259 | Monday, Wednesday 1:10–2:10 p.m. <br/>

For more information on getting help, visit the [Student Success Center website](https://www.cs.montana.edu/student-success-center.html).

<br style="clear:both" />

## Resources

- [Student textbook resources --- *{{ site.data.settings.textbook }}*](http://williamstallings.com/OperatingSystems/OS9e-Student/)
- [Reading a computer science research paper](https://dl.acm.org/citation.cfm?id=1595493)
- [How to give a technical presentation (how to give a scientific talk)](https://homes.cs.washington.edu/~mernst/advice/giving-talk.html)
- [Efficient Reading of Papers in Science and Technology](https://classes.cs.uoregon.edu/13W/cis433/docs/Hanson2000.pdf)

## Prerequisites

Prior to taking this course, you should have fulfilled the following [CSCI](http://catalog.montana.edu/coursedescriptions/csci/) prerequisites:
[CSCI 232](http://catalog.montana.edu/search/?P=CSCI%20232), and
[CSCI 361](http://catalog.montana.edu/search/?P=CSCI%20361) or [EELE 371](http://catalog.montana.edu/search/?P=EELE%20371).

If you do not have any of the above prerequisites, you should touch base with me as soon as possible.

## Questionnaire

I would like to know a little about you.
Please fill out [this questionnaire](https://forms.gle/Krmco3bNsbPRjSca7) as soon as possible.


## Schedule <span class="titlenote">(subject to change with minimal notice)</span>

Below is the calendar for this course.
***This is a tentative schedule, which may be altered as the term progresses.***
It is the responsibility of the students to frequently check this web-page for schedule, readings, and assignment changes.
As the professor, I will attempt to announce any change to the class, but this web-page should be viewed as authoritative.
If you have any questions, please contact me.
<!-- This is a tentative schedule for the course. -->
<!-- Links will be added regularly with topics and assignments. -->
<!-- Notes will be provided for each class, linked from the date. -->

Unless otherwise indicated, references are to the textbook *{{ site.data.settings.textbook }}*.

Feedback is always appreciated regarding typos, suggestions for more detailed explanations, additional examples, etc.

{% comment %}
<!--
Schedule
    - Introduction & Historical Overview
    - …
    - Scheduling (uniprocessor scheduling, real-time scheduling, etc.)
    - …
    - Mobile OS: Android & iOS

    https://www.cs.montana.edu/bhz/classes/fall-2018/csci460/

    This page is very much copied from 2017, just for your information. D2L support will also be used.
    We will update the syllabus before each lecture.
    Aug 27 --- Course overview.
    Aug 29, 31 --- History of OS development. Early memory management. Static and dynamic partition, memory deallocation (pdf). (Read Chapter 2, Chapter 7.1-7.2.) Handout (pdf)
    Aug 31, Sep 5 --- The memory hierarchy. (Read Chapter 1.)
    Sep 5, 7 --- Recent memory management. (Read Chapter 7-8.) Handout (pdf)
    Sep 7, 10 --- Recent memory management (cont.). (Read Chapter 7-8.)
    Sep 12, 14, 17 --- Processor Management (part 1). (Read chapter 3 and 9.) Handout (pdf)
    Sep 17, 19, 21 --- Processor Management (part 2, deadlock and starvation). (Read Chapter 6.) Handout (pdf) , Handout (pdf)
    Sep 21 --- Exercise 1 on deadlock and starvation.
    Sep 24 --- Test 1.
    Sep 26, 28 --- Detailed Solutions for the Readers/Writers problem. (Read Chapter 5.) Notes (solution 1) (pdf) , Notes (solution 2&3) (pdf)
    Sep 28 --- Exercise 2 on deadlock and starvation.
    Oct 1 --- Threads. Creating threads in Unix/Linux through "pthread.h". Sample programs: Program 1, Program 2, Program 3. Sample output (2 for each program): Program 1, Program 1; Program 2, Program 2; Program 3, Program 3.
    Oct 1,3 --- Practice Test on deadlock and starvation.
    Oct 3, 5 --- File Management. (Read Chapter 12.) Handout (pdf)
    Oct 8,10,12 --- Device Management. (Read Chapter 11.) Extra Notes 1 (pdf) , Extra Notes 2 (pdf)
    Oct 15 --- Practice Test on device management.
    Oct 17 --- CRC code, Privacy Protection using Redundant Info.
    Oct 19, 24 --- RSA public-key system. Handout (pdf)
    Oct 22 --- Test 2.
    Oct 24 --- Multiprocessor Scheduling. (Read Chapter 10.1.) Handout (pdf) , Original paper by Tucker and Gupta (pdf)
    Oct 26, 29, 31, Nov 2 --- Real-time scheduling. (Read Chapter 10.2-10.6.) Handout (pdf) , Original Paper for RMS (pdf) , Handout (pdf) ,
    Oct 29 --- Review for Test #2.
    Nov 5,7 --- Queuing analysis. (Read Queuing analysis materials by Stallings. )
    Nov 7 --- Introduction to a few possible project topics related to scheduling. paper 1 (pdf) , paper 2 (pdf) , paper 3 (pdf) , paper 4 (pdf) .
    Nov 9,14 --- Distributed mutual exclusion/deadlock. (Read on-line chapter 18.3.) Handout (pdf) , Handout (pdf)
    Nov 12 --- Veteran's Day, no class.
    Nov 16 --- Preview for Test #3.
    Nov 19 --- Test #3.
    Nov 16 --- Project presentations start.
    Nov 21,23 --- No class, Thanksgiving.
    Nov 16 - Dec 7 --- Project presentations.
 -->

Introduction
- The Kernel Abstractions
- Interrupts
Processes
Concurrency & Threads
Synchronization

Test 1

Memory Management
Scheduling
Virtualization

Test 2

I/O & File Management
Device Management
File Systems
Security
- OS Security Overview
- Access Control

Test 3

Special Topics
- Operating Systems for Mobile: Android & iOS
- Operating Systems for IoT
Project Presentations

{% endcomment %}

{:.table .table-hover .table-striped .table-bordered .table-sm}
| Date          | Topics & Lectures                                                                                                                                                                      | Reading                        | Assignments                                  |
| **Week 1**    | <span class="smallnote">Introduction; Week 1 will be led by Professor Binhai Zhu.</span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 08/26/2019    | Introduction & Course Overview; History of OS Development (Part I). [notes](notes/cs460-bhz-1.pdf){:.badge .badge-pill .badge-info}                                                    | Chapter 2                      | Homework 1 (Due 08/30)                       |
| 08/28/2019    | *Class Cancelled.*                                                                                                                                                                     |                                |                                              |
| 08/30/2019    | History of OS Development (Part II); <br/>Early Memory Management: static and dynamic partition, memory deallocation. [notes](notes/cs460-bhz-2.pdf){:.badge .badge-pill .badge-info}  | Chapter 7.1-7.2                |                                              |
| **Week 2**    | <span class="smallnote"></span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 09/02/2019    | *No Class. Labor Day.*                                                                                                                                                                 |                                |                                              |
| 09/04/2019    |                                                                                                                                                                                        |                                |                                              |
| 09/06/2019    |                                                                                                                                                                                        |                                |                                              |
{% comment %}
| **Week 3**    | <span class="smallnote"></span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 09/09/2019    |                                                                                                                                                                                        |                                |                                              |
| 09/11/2019    |                                                                                                                                                                                        |                                |                                              |
| 09/13/2019    |                                                                                                                                                                                        |                                |                                              |
| **Week 4**    | <span class="smallnote"></span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 09/16/2019    |                                                                                                                                                                                        |                                |                                              |
| 09/18/2019    |                                                                                                                                                                                        |                                |                                              |
| 09/20/2019    |                                                                                                                                                                                        |                                |                                              |
| **Week 5**    | <span class="smallnote"></span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 09/23/2019    |                                                                                                                                                                                        |                                |                                              |
| 09/25/2019    |                                                                                                                                                                                        |                                |                                              |
| 09/27/2019    |                                                                                                                                                                                        |                                |                                              |
| **Week 6**    | <span class="smallnote"></span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 09/30/2019    |                                                                                                                                                                                        |                                |                                              |
| 10/02/2019    |                                                                                                                                                                                        |                                |                                              |
| 10/04/2019    |                                                                                                                                                                                        |                                |                                              |
| **Week 7**    | <span class="smallnote"></span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 10/07/2019    |                                                                                                                                                                                        |                                |                                              |
| 10/09/2019    |                                                                                                                                                                                        |                                |                                              |
| 10/11/2019    |                                                                                                                                                                                        |                                |                                              |
| **Week 8**    | <span class="smallnote"></span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 10/14/2019    |                                                                                                                                                                                        |                                |                                              |
| 10/16/2019    |                                                                                                                                                                                        |                                |                                              |
| 10/18/2019    |                                                                                                                                                                                        |                                |                                              |
| **Week 9**    | <span class="smallnote"></span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 10/21/2019    |                                                                                                                                                                                        |                                |                                              |
| 10/23/2019    |                                                                                                                                                                                        |                                |                                              |
| 10/25/2019    |                                                                                                                                                                                        |                                |                                              |
| **Week 10**    | <span class="smallnote"></span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 10/28/2019    |                                                                                                                                                                                        |                                |                                              |
| 10/30/2019    |                                                                                                                                                                                        |                                |                                              |
| 11/01/2019    |                                                                                                                                                                                        |                                |                                              |
| **Week 11**   | <span class="smallnote"></span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 11/04/2019    |                                                                                                                                                                                        |                                |                                              |
| 11/06/2019    |                                                                                                                                                                                        |                                |                                              |
| 11/08/2019    |                                                                                                                                                                                        |                                |                                              |
| **Week 12**   | <span class="smallnote">Project Start?</span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 11/11/2019    | *No Class. Veteran's Day.*                                                                                                                                                |                                |                                              |
| 11/13/2019    |                                                                                                                                                                                        |                                |                                              |
| 11/15/2019    |                                                                                                                                                                                        |                                |                                              |
| **Week 13**   | <span class="smallnote"></span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 11/18/2019    |                                                                                                                                                                                        |                                |                                              |
| 11/20/2019    |                                                                                                                                                                                        |                                |                                              |
| 11/22/2019    |                                                                                                                                                                                        |                                |                                              |
| **Week 14**   | <span class="smallnote"></span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 11/25/2019    |                                                                                                                                                                                        |                                |                                              |
| 11/27/2019    | *No Class. Thanksgiving.*                                                                                                                                                              |                                |                                              |
| 11/29/2019    | *No Class. Thanksgiving.*                                                                                                                                                              |                                |                                              |
| **Week 15**   | <span class="smallnote"></span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 12/02/2019    |                                                                                                                                                                                        |                                |                                              |
| 12/04/2019    |                                                                                                                                                                                        |                                |                                              |
| 12/06/2019    | *Last Day of Class.*                                                                                                                                                                   |                                |                                              |
| **Week 16**   | <span class="smallnote"></span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 12/09/2019    |                                                                                                                                                                                        |                                |                                              |
| 12/11/2019    |                                                                                                                                                                                        |                                |                                              |
| 12/13/2019    |                                                                                                                                                                                        |                                |                                              |
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
{% endcomment %}

*The schedule will be updated with more details soon.*

## Grading

The course will involve a variety of assignments, exams, and a project.
Unless otherwise noted by the instructor, all work in this course is to be completed independently.
If you are ever uncertain of how to complete an assignment, you can go to office hours or engage in high-level discussions about the problem with your classmates on the Piazza boards.

* Participation: 10%
* Programming Assignments: 20%
* Homework: 20%
* Exams: 30%
* Project: 20%

If a scheduling conflict prevents you from taking an exam at the scheduled time, you must let me know ***at least*** one week before the exam.

There is no final exam for the course, but there is a final project.

***I will post specific project-related details and deadlines as we get closer.***

## Project

Students will complete an OS-related project in the final weeks of this term.
Students taking this course will be divided into groups of 2-4 people.
*(1-person teams are permissible, but groups of 2-4 people are preferable.)*
Each group will choose, propose, and implement an OS-related project; groups will also present a live demo and write a report about the project.

The evaluation of the project is based on the report, quality, presentation, and participation.

Each member of the same group should participate in the presentation/demo and will receive the same mark.

***I will post specific project-related details and deadlines as we get closer.***

<!-- During the actual project presentations, attendance will be taken randomly. --- 3 points -->

<!-- FINAL PROJECT REPORT DUE: Dec 7, 2018! -->

## Exams

There will be two or three in-class exams.

***I will post specific exam-related details and deadlines as we get closer (at least one week in advance, but hopefully sooner).***

## Late Penalties

You are allowed at most one late submission (up to 48 hours) with no penalty &ndash; no excuse required.
Indicate in your submission that you are electing to use your free pass; you cannot change this decision later.

Once your pass is used (or you fail to indicate that you are using your free pass), the penalties for late submissions are as follows:

* &lt;     8 hours: 10%
* &lt;    24 hours: 20%
* &lt;    48 hours: 40%
* &#8805; 48 hours: no credit.

## Handing in Assignments

Unless otherwise stated, everything will be submitted through [D2L]({{site.data.settings.d2l}}).

Even when an assignment has some written exercises, you are required to either type in a file or scan your written work and submit it electronically.

To submit output from your program, submit a copy-pasted file in plain text format and/or a screenshot, as appropriate.

For plain text, you can use an editor like Sublime, TextEdit, NotePad, Emacs, or even Word, but be sure to save as plain text.

If an assignment requires you to submit multiple files, zip all the files into a single zip file and submit that.
If you have to revise your submission, submit your new zip file once more, with VX appended (V2 for Version 2, V3 for Version 3, etc.);
only the last version will be graded.

## Sample Solutions

Sample solutions for assignments and exams will be posted on [D2L]({{site.data.settings.d2l}}).

## Course Expectations

The expectations for the course are that students will attend every class, do any readings assigned for class, and actively and constructively participate in class discussions.
Class participation will be a measure of contributing to the discourse both in class, through discussion and questions, and outside of class through contributing and responding to the D2L forum.

#### Laptops and Phones

*Out of respect for your classmates, I ask that you turn off all laptops, tablets, and phone screens for the duration of each class!*

I have heard of various ways of dealing with the distractions that
laptops cause during lecture: laptop zones, laptop permission forms,
and the honor system.  None worked.  I also have a hard time saying "no laptops"
since I know that some people do use them to take notes and follow along with
live coding examples, etc. Here's what I propose:

> If you are someone that absolutely needs their laptop during lecture and you can't
> part with it for 3 hours per week, then by all means, use your laptop. []()
> If you can manage to go through lecture without your laptop, I believe you will
> learn more and ultimately take more away from this class.
> There is recent research that attests to the [negative impacts of learning and
> retention when multitasking](http://www.creativitypost.com/psychology/why_learning_and_multitasking_dont_mix).
> It has also been shown that [writing notes by hand rather than on a laptop](http://pss.sagepub.com/content/25/6/1159)
> engages different cognitive processes and has direct (positive) consequences
> for learning.

#### Getting Help

- If you visit me or any of the course staff for help with a program that you are writing, make sure that you can get to an electronic copy of your program.
That way, we can try to compile and run it.
It's nice to have a printed version of your program, but we cannot compile and run a printed version.
- When you email a program to one of us, you just need to add your program as an attachment to your email,
along with additional information as to what problems you have observed.
If you have multiple files, I prefer it in a zipped folder with a Makefile or easy-to-understand instructions on how to compile and run your program.
- When you email a question, please be as specific as possible, and tell us what you've done to try to figure out a solution for yourself.
We reserve the right to not answer emails that say nothing more than "My program doesn't work; where is the problem?"
- Please do not share detailed solutions in public settings (e.g., class, office hours, discussion forums), unless an assignment or project indicates that you can work with others.
- Please try to prepare before getting help in office hours or by email; course staff can be much more helpful if you've already made a solid effort at solving the problem you are working on,
and can articulate what you have tried and what you are thinking.

## Academic Honesty

Please review [MSU's Code of Conduct, Policies, Regulations, & Reports](http://catalog.montana.edu/code-conduct-policies-regulations-reports/).

A couple of clarifications and additions:
> *TL;DR Although you may discuss and design with others, the work you hand in (e.g., code, write-ups) must be entirely your own.*
> *Anything you submit that did not originate from you must be accompanied by attribution.*
> *Also, please do not share solutions or detailed information about solutions (e.g., specific code) with others.*   

{% comment %}
- For the assignments, you may consult freely with instructors and classmates during the phase of designing solutions,
but you should then work individually when creating your programs&mdash;typing, documenting, and generating output.  
- During the debugging stage you may discuss your problems with others in the class, but you should not copy code to "fix" bugs.
- If you work with a classmate on any assignment, you should tell us who you worked with in a comment at the beginning of your write-up and/or program.
- You should attribute the proper source in any code that you submit that you did not write yourself.
This includes code that you take from outside references&mdash;for example a book other than the course text, Stack Overflow, and so forth.
This also includes code that you take from class examples, a book, or the assignments.
*(I agree that may be tedious to attribute the source in code that we have given you, but we want you to be in the habit of attributing your sources.)*
- If you resubmit any work and use code from a published solution, you should attribute that.
- Whenever we ask you to turn in sample runs of your program, the runs you turn in must be the result of actually running your program.
It is a violation of the Academic Honesty principle to falsely represent output as coming from your program if it did not.
If you change your program, make sure to generate output from the version of the program that you hand in.
- It is not easy to come up with good homework problems that help you learn a concept, are interesting, and require an appropriate amount of work.
Pretty much anything can be found online.
You should not go looking for any solutions to assignments in this course.
- I realize that it can be hard to decide when you might be violating the Academic Honesty principle when we let you collaborate to a limited extent.
Here is a good rule of thumb.
If you are talking in a spoken, natural language (English, Chinese, German, Hindi, or some other natural language) you are probably OK.
If you find yourself talking in code (C, Java, etc.), you have likely crossed the line.
- If you have any questions about whether what you're doing is within the Academic Honesty principle, do not hesitate to check with me.
If it's late and you can't find me, you're better off erring on the side of caution.
- Most violations of the Academic Honesty principle come down to failure to cite work that is not yours.
If you copy any portion of your program from your friend Elvira and represent it as your work, then you either intended to deceive or were careless about citing.
Either case is a violation of the Academic Honesty principle.
If you copy your entire program from Elvira but include the comment, "This code was copied in its entirety from Elvira," then you cited properly, though you didn't actually do the work.
In this latter case, I would not report a violation of the Academic Honesty principle, though your grade on the assignment would be 0.
- To cite in code, include in a comment&mdash;near the top of your file is fine&mdash;stating where you got the code from:
```java
// Based on code from page 66 of the textbook.
```  
{% endcomment %}

## Religious Observances

Some students may wish to take part in religious observances that occur during this academic term.
If you have a religious observance that conflicts with your participation in the course, please meet with me as soon as possible to discuss appropriate accommodations.

## Disabilities

If you have a documented disability (including "invisible" disabilities such as chronic diseases and learning disabilities) for which you are or may be requesting any accommodation(s),
I encourage you to reach out to me and the [Office of Disability Services (ODS)](http://www.montana.edu/disabilityservices/) as soon as possible.
