---
layout: default
---

<div class="announcement">Want a refresher on C Programming?
Send an <a href="mailto:mary.cummings1@montana.edu" class="alert-link">email</a> to <a href="http://www.cs.montana.edu/directory/2069105/mary-cummings" class="alert-link">Dr. Mary Ann Cummings</a> to request access to materials from her course on <i>Programming with C</i>.</div>

<div class="announcement">We need a notetaker ASAP! Please contact the <a href="http://www.montana.edu/disabilityservices/" class="alert-link">Office of Disability Services</a> if interested.</div>

## About the Course

This course introduces students to the design of operating systems.
Students will be exposed to a wide variety of topics, including: processes, threads, concurrent programming, scheduling, memory, files, I/O management, and security issues.
The course will conclude with a series of advanced topics.

## Logistics

<img src="{{ site.data.settings.img }}" width="25%" height="auto" align="right">

**Lectures:** {{ site.data.settings.lectures }} <br/>
**Textbook:** {{ site.data.settings.textbook }} --- {{ site.data.settings.textbooklink }} <br/>
**D2L:** [{{ site.data.settings.d2l }}]({{ site.data.settings.d2l }}) <br/>

**Instructor:** {{ site.data.settings.instructor }} \| [{{site.data.settings.email}}](mailto:{{site.data.settings.email}}?subject={{site.data.settings.titlenum}}) \| {{site.data.settings.office}} \| {{site.data.settings.officephone}} <br/>
**Office Hours:** {{ site.data.settings.officehours }} <br/>

> If you'd like to meet with me outside of office hours, please contact me and we'll set up a time.
> Also, I hang around my office quite a bit so if my office door is open, feel free to drop in.  

**Grader:** Gerard Shu Fuhnwi \| [gerard.shufuhnwi@student.montana.edu](mailto:gerard.shufuhnwi@student.montana.edu) <br/>
**Office Hours:** Barnard Hall 259 | Monday, Wednesday 1:10–2:10 p.m. <br/>

For more information on getting help, visit the [Student Success Center website](https://www.cs.montana.edu/student-success-center.html).

<br style="clear:both" />

## Resources

- **(Required) Textbook:** {{ site.data.settings.textbook }} --- {{ site.data.settings.textbooklink }}
    - [Student textbook resources --- *{{ site.data.settings.textbook }}*](http://williamstallings.com/OperatingSystems/OS9e-Student/)
- **(Optional) Textbook:** [zyBook - Operating Systems](https://learn.zybooks.com/zybook/MONTANACSCI460PetersFall2019)
    1. Sign in or create an account at [learn.zybooks.com](https://learn.zybooks.com/)
    2. Enter zyBook code: `MONTANACSCI460PetersFall2019`
    3. Subscribe. *NOTE: A subscription is $58. Students may begin subscribing on Aug 29, 2019 and the cutoff to subscribe is Dec 03, 2019. Subscriptions will last until Dec 27, 2019.*

##### Technical Resources

- [System Programming Overview / Programming in C Refresher](http://www.lysator.liu.se/c/bwk-tutor.html)
- [Browse the Linux Source Code (thanks @bootlin!)](https://elixir.bootlin.com/linux/latest/source)
- [x86 and amd64 instruction reference](https://www.felixcloutier.com/x86/)
- [C and C++ in 5 days]({{site.data.settings.reading}}/C-in-5-days.pdf)
- [An Introduction to C Programming for Java Programmers]({{site.data.settings.reading}}/intro-to-C-for-java-programmers.pdf)
- [The Linux Kernel Module Programming Guide]({{site.data.settings.reading}}/readme-linux-kernel-programming-lkmpg.pdf)
- [The C Cheat Sheet]({{site.data.settings.reading}}/the-C-cheat-sheet.pdf)
- [A Tiny Guide to Programming in 32-bit x86 Assembly Language]({{site.data.settings.reading}}/tiny-guide-to-x86-assembly.pdf)

##### Research Resources

- [Reading a computer science research paper](https://dl.acm.org/citation.cfm?id=1595493)
- [How to give a technical presentation (how to give a scientific talk)](https://homes.cs.washington.edu/~mernst/advice/giving-talk.html)
- [Efficient Reading of Papers in Science and Technology](https://classes.cs.uoregon.edu/13W/cis433/docs/Hanson2000.pdf)

##### Forward-Thinking Papers Relevant to OS

- [A `fork()` in the road](https://www.microsoft.com/en-us/research/uploads/prod/2019/04/fork-hotos19.pdf) - HotOS'19
- [CheriABI: enforcing valid pointer provenance and minimizing pointer privilege in the POSIX C run-time environment](https://www.cl.cam.ac.uk/research/security/ctsrd/pdfs/201904-asplos-cheriabi.pdf) - ASPLOS'19 [summary](https://blog.acolyer.org/2019/05/28/cheri-abi/){:.notes}
- [Compress Objects, Not Cache Lines: An Object-Based Compressed Memory Hierarchy](https://people.csail.mit.edu/poantsai/papers/2019.zippads.asplos.pdf) - ASPLOS'19 [summary](https://blog.acolyer.org/2019/05/24/zippads/){:.notes}
- [Granular Computing](https://dl.acm.org/citation.cfm?id=3321447) - HotOS'19
- [Practical Safe Linux Kernel Extensibility](https://dl.acm.org/citation.cfm?id=3321429) - HotOS'19
- [My VM is Lighter (and Safer) than your Container](https://dl.acm.org/citation.cfm?id=3132763) - SOSP'17

## Prerequisites

Prior to taking this course, you should have fulfilled the following [CSCI](http://catalog.montana.edu/coursedescriptions/csci/) prerequisites:
[CSCI 232](http://catalog.montana.edu/search/?P=CSCI%20232), and
[CSCI 361](http://catalog.montana.edu/search/?P=CSCI%20361) or [EELE 371](http://catalog.montana.edu/search/?P=EELE%20371).

If you do not have any of the above prerequisites, you should touch base with me as soon as possible.

## Questionnaire

I would like to know a little about you.
Please fill out this [Questionnaire] as soon as possible.

## Schedule
***This is a tentative schedule that is subject to change with minimal notice. The schedule will be altered as the term progresses.***

Below is the calendar for this course.
It is the responsibility of the students to frequently check this web-page for schedule, readings, and assignment changes.
As the professor, I will attempt to announce any change to the class, but this web-page should be viewed as authoritative.
If you have any questions, please contact me.
<!-- This is a tentative schedule for the course. -->
<!-- Links will be added regularly with topics and assignments. -->
<!-- Notes will be provided for each class, linked from the date. -->

Unless otherwise indicated, references are to the textbook *{{ site.data.settings.textbook }}*.

Feedback is always appreciated regarding typos, suggestions for more detailed explanations, additional examples, etc.

 {% comment %}
 + C Refresher, Makefiles
 + Tools (e.g., Git, VirtualBox, Vagrant)
 + Linux Namespaces (e.g., Containers)
 {% endcomment %}

{:.table .table-hover .table-striped .table-bordered .table-sm}
| Date          | Topics & Lectures                                                                                                                                                                      | Reading                        | Assignments                                  |
| **Week 1**    | <span class="smallnote">Introduction; Week 1 will be led by Professor Binhai Zhu.</span>                                                                                               | <span class="smallnote">Chapters 1 & 2</span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 08/26/2019    | Introduction & Course Overview; History of OS Development (Part I). [notes]({{site.data.settings.notes}}/cs460-bhz-1.pdf){:.notes}                                                     | Chapter 2                      | [HW1] (Due 09/13)
| 08/28/2019    | *Class Cancelled.*                                                                                                                                                                     |                                |
| 08/30/2019    | History of OS Development (Part II); <br/>Early Memory Management: static and dynamic partition, memory deallocation. [notes]({{site.data.settings.notes}}/cs460-bhz-2.pdf){:.notes}   | 7.1-7.2                        |
| **Week 2**    | <span class="smallnote">Review and High-Level OS Concepts</span>                                                                                                                       | <span class="smallnote"></span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 09/02/2019    | *No Class. Labor Day.*                                                                                                                                                                 |                                |
| 09/04/2019    | *OS Reboot:* Introduction Revisited + Week 1 Review [slides][slides01]{:.slides}                                                                                                       |                                | [Questionnaire]
| 09/06/2019    | Computer System Overview & Operating System Overview [slides][slides02]{:.slides}                                                                                                      | Chapter 1 & 2                  |
| **Week 3**    | <span class="smallnote">Processes, Threads</span>                                                                                                                                      | <span class="smallnote">Chapters 3--6</span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 09/09/2019    | *Class Cancelled.*                                                                                                                                                                     |                                |                                              
| 09/11/2019    | Processes (Part I). [slides][slides03]{:.slides}                                                                                                                                       | 3.1, 3.2                       |
| 09/13/2019    | Processes (Part II). [slides][slides04]{:.slides} [fork_bomb.c]{:.code}                                                                                                                | 3.3-3.5                        |
| **Week 4**    | <span class="smallnote"></span>                                                                                                                                                        | <span class="smallnote"></span>  
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 09/16/2019    | Processes (Part III). [slides][slides05]{:.slides}                                                                                                                                     |                                |
| 09/18/2019    | Processes & Threads. [slides][slides06]{:.slides}                                                                                                                                      | 4.1, 4.2, 4.3, 4.6             |
| 09/20/2019    | Some Review of Processes & Threads. [slides][slides07]{:.slides}                                                                                                                       |                                | [HW2] (Due 10/11)
| **Week 5**    | <span class="smallnote">Concurrency</span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 09/23/2019    | Concurrency: Mutual Exclusion & Synchronization (Part I) [slides][slides08]{:.slides}                                                                                                  | 5.1-5.9, [Intro to Threads]    |
| 09/25/2019    | Concurrency: Mutual Exclusion & Synchronization (Part II) [slides][slides09]{:.slides} [threads01.c]{:.code} [threads02.c]{:.code}                                                     |                                |
| 09/27/2019    | Concurrency: Deadlock & Starvation                                                                                                                                                     | 6.1-6.6 (6.7-6.8)              | {% comment %}[PA1] (Due 09/27){% endcomment %}
| **Week 6**    | <span class="smallnote">Scheduling</span>                                                                                                                                              | <span class="smallnote">Chapters 9 & 10</span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 09/30/2019    |                                                                                                                                                                                        |                                | {% comment %}[HW3] (Due 10/18){% endcomment %}
| 10/02/2019    |                                                                                                                                                                                        |                                |
| 10/04/2019    |                                                                                                                                                                                        |                                |
| **Week 7**    | <span class="smallnote">Memory Management & Virtual Memory</span>                                                                                                                      | <span class="smallnote">Chapters 7 & 8</span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 10/07/2019    | {% comment %}Exam Review{% endcomment %}***Exam #1***                                                                                                                                  |                                |
| 10/09/2019    |                                                                                                                                                                                        |                                |
| 10/11/2019    |                                                                                                                                                                                        |                                |
| **Week 8**    | <span class="smallnote">File Systems & I/O</span>                                                                                                                                      | <span class="smallnote">Chapters 11 & 12</span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 10/14/2019    |                                                                                                                                                                                        |                                | {% comment %}[HW4] (Due 10/25){% endcomment %}
| 10/16/2019    |                                                                                                                                                                                        |                                |
| 10/18/2019    |                                                                                                                                                                                        |                                |
| **Week 9**    | <span class="smallnote">OS Security</span>                                                                                                                                             | <span class="smallnote">Chapter 15</span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 10/21/2019    | {% comment %}OS Security Overview{% endcomment %}                                                                                                                                      |                                |
| 10/23/2019    |                                                                                                                                                                                        |                                |
| 10/25/2019    |                                                                                                                                                                                        |                                |
| **Week 10**   | <span class="smallnote">Finish OS Security; Potential Special Topics: Embedded Systems, IoT, Mobile OS, Networks, VMs, Containers, Side-Channel Attacks</span>                         | <span class="smallnote">Chapters 13--16</span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 10/28/2019    | {% comment %}Access Control{% endcomment %}                                                                                                                                            |                                | {% comment %}[HW5] (Due 11/08){% endcomment %}
| 10/30/2019    |                                                                                                                                                                                        |                                |
| 11/01/2019    |                                                                                                                                                       |                                | {% comment %}[PT6]{% endcomment %}
| **Week 11**   | <span class="smallnote"></span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 11/04/2019    | Hold for Guest Lecture - [Will Peteroy](https://www.linkedin.com/in/wpete/), CEO @ [icebrg.io](https://www.icebrg.io) - Breaking and Securing an OS                                    |                                |
| 11/06/2019    |                                                                                                                                                                                        |                                |
| 11/08/2019    | {% comment %}Exam Review{% endcomment %}***Exam #2***                                                                                                                                  |                                |
| **Week 12**   | <span class="smallnote"></span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 11/11/2019    | *No Class. Veteran's Day.*                                                                                                                                                             |                                |
| 11/13/2019    |                                                                                                                                                                                        |                                |
| 11/15/2019    |                                                                                                                                                                                        |                                |
| **Week 13**   | <span class="smallnote"></span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 11/18/2019    | Project Presentations.                                                                                                                                                                 |                                |
| 11/20/2019    | Project Presentations.                                                                                                                                                                 |                                |
| 11/22/2019    | Project Presentations.                                                                                                                                                                 |                                |
| **Week 14**   | <span class="smallnote"></span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 11/25/2019    | Project Presentations.                                                                                                                                                                 |                                |
| 11/27/2019    | *No Class. Thanksgiving.*                                                                                                                                                              |                                |
| 11/29/2019    | *No Class. Thanksgiving.*                                                                                                                                                              |                                |
| **Week 15**   | <span class="smallnote"></span>
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |
| 12/02/2019    | Project Presentations.                                                                                                                                                                 |                                |
| 12/04/2019    | Project Presentations.                                                                                                                                                                 |                                |
| 12/06/2019    | Project Presentations. *(Last Day of Class.)*                                                                                                                                          |                                |
| ------------- | -------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- | ------------------------------ |--------------------------------------------- |

**Schedule Legend:** *HW = Homework, PT = Participation Test, P = Programming Assignment, E = Exam.*

[Questionnaire]: https://forms.gle/Krmco3bNsbPRjSca7

<!-- Reading -->
[Sys Design Hints]: {{site.data.settings.reading}}/design-hints-butler-lampson-1983.pdf
[Intro to Threads]: {{site.data.settings.reading}}/intro2threads-andrew-birrell-1989.pdf

<!-- code examples, provided code, etc. -->
[fork_bomb.c]: {{site.data.settings.code}}/fork_bomb.c
[threads01.c]: {{site.data.settings.code}}/threads01.c
[threads02.c]: {{site.data.settings.code}}/threads02.c

<!-- slides -->
[slides01]: {{site.data.settings.slides}}/cs460-01.pdf
[slides02]: {{site.data.settings.slides}}/cs460-02.pdf
[slides03]: {{site.data.settings.slides}}/cs460-03.pdf
[slides04]: {{site.data.settings.slides}}/cs460-04.pdf
[slides05]: {{site.data.settings.slides}}/cs460-05.pdf
[slides06]: {{site.data.settings.slides}}/cs460-06.pdf
[slides07]: {{site.data.settings.slides}}/cs460-07.pdf
[slides08]: {{site.data.settings.slides}}/cs460-08.pdf

[slides09]: {{site.data.settings.slides}}/cs460-09.pdf
[slides10]: {{site.data.settings.slides}}/cs460-10.pdf
[slides11]: {{site.data.settings.slides}}/cs460-11.pdf
[slides12]: {{site.data.settings.slides}}/cs460-12.pdf
[slides13]: {{site.data.settings.slides}}/cs460-13.pdf
[slides14]: {{site.data.settings.slides}}/cs460-14.pdf
[slides15]: {{site.data.settings.slides}}/cs460-15.pdf
[slides16]: {{site.data.settings.slides}}/cs460-16.pdf
[slides17]: {{site.data.settings.slides}}/cs460-17.pdf
[slides18]: {{site.data.settings.slides}}/cs460-18.pdf
[slides19]: {{site.data.settings.slides}}/cs460-19.pdf
[slides20]: {{site.data.settings.slides}}/cs460-20.pdf
[slides21]: {{site.data.settings.slides}}/cs460-21.pdf
[slides22]: {{site.data.settings.slides}}/cs460-22.pdf
[slides23]: {{site.data.settings.slides}}/cs460-23.pdf
[slides24]: {{site.data.settings.slides}}/cs460-24.pdf
[slides25]: {{site.data.settings.slides}}/cs460-25.pdf
[slides26]: {{site.data.settings.slides}}/cs460-26.pdf
[slides27]: {{site.data.settings.slides}}/cs460-27.pdf
[slides28]: {{site.data.settings.slides}}/cs460-28.pdf
[slides29]: {{site.data.settings.slides}}/cs460-29.pdf
[slides30]: {{site.data.settings.slides}}/cs460-30.pdf

<!-- homework -->
[HW1]: {{site.data.settings.d2l}}
[HW2]: {{site.data.settings.d2l}}
[HW3]: {{site.data.settings.d2l}}
[HW4]: {{site.data.settings.d2l}}
[HW5]: {{site.data.settings.d2l}}

<!-- participation tests (posted w/ solutions) -->
[PT1]: #
[PT2]: #
[PT3]: #
[PT4]: #
[PT5]: #
[PT6]: #

<!-- programming assignments (not posted w/ solutions) -->
[PA1]: #
[PA2]: #
[PA3]: #

## Grading

The course will involve a variety of assignments, exams, and a project.
Unless otherwise noted by the instructor, all work in this course is to be completed independently.
If you are ever uncertain of how to complete an assignment, you can go to office hours or engage in high-level discussions about the problem with your classmates on the Piazza boards.

* Participation: 10%
* Programming Assignments: 30%
* Homework: 10%
* Exams: 30% (2 exams, 15% each)
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

<!-- During the actual project presentations, attendance will be taken randomly. --- 3 points -->

<!-- FINAL PROJECT REPORT DUE: Dec 7, 2018! -->

<div id="accordion">
<div class="card card bg-light">
<!-- header -->
<!-- <div class="card-header" id="headingTwo" data-toggle="collapse"  data-target="#collapseTwo" aria-expanded="true" aria-controls="collapseTwo" markdown="1"> -->
<!-- *Click this bar to show/hide project details...* -->
<!-- </div> -->

<div class="card-header" id="headingTwo" data-toggle="collapse"  data-target="#collapseTwo" aria-expanded="true" aria-controls="collapseTwo" markdown="1">
<h5 class="mb-0">
<button class="btn btn-link" data-toggle="collapse" data-target="#collapseOne" aria-expanded="true" aria-controls="collapseOne"  markdown="1">
<i class="fa" aria-hidden="true"></i>
*Click here to show/hide project details...*
<!-- ***I will post specific project-related details and deadlines as we get closer.*** -->
</button>
</h5>
</div>

<!-- details -->
<div id="collapseTwo" class="collapse" aria-labelledby="headingTwo" data-parent="#accordion">
<div class="card-body" markdown="1">
# Project Details

Projects can take various forms:

1. **Technical Report (TR).** For this type of project, your group will work together to conduct a deep technical analysis of an existing OS concept and its implementation (e.g., in the Linux OS). You should examine actual OS code and be able to describe how that code works. You should also formally present an introduction to your OS concept/implementation, why it is necessary, alternative ideas or strategies, an assessment of how it was implemented, and ideas for future work or possible improvements.
2. **Proof of Concept (PoC).** For this type of project, your group will work together to implement an interesting OS idea or algorithm. The primary assessment of this type of project will be through a short demo (approx. 10 minutes). This project still requires a technical report, but the emphasis is less on the report and more on the demo.
3. **Something Else?** If your group has an idea that doesn’t fit into one of the above categories, schedule some time to meet with me to discuss the idea. Your group should come prepared to discuss details such as the problem, deliverables, assessment, and so forth.

## Project Milestones

#### Project Proposal

Your group will present a 1-page proposal on your project. Your proposal should (briefly) address:

- Who are the members of your group.
- An overview to your proposed project and deliverables.
- Your plan for division of labor within the group.
- A rough schedule for when various aspects of the project will be complete.

#### Final Submission

Your group should submit all deliverables in a single zipped folder.

The naming convention should be:  

`
os-project-fall2019-lastname1-lastname2-lastname3.zip
`

#### Demo

- Project presentations will take place in the final weeks of the term during regularly-scheduled class times.
- TR projects will present an overview of their technical report.
- PoC projects will present a demo (which should include some introduction to the project, the goals, and what the PoC demonstrates).
- All students are required to attend the projects presentations & demos. If you need to miss a class, I will need written notice at least 1 week before the class(es) that you will not be able to attend.

## Project Grade Breakdown

- Proposal (10%)
- Final Submission / Demo / Presentation (80%)
- Attendance during presentations (10%)
</div>
</div>
</div>
</div>


## Exams

There will be two in-class exams.

Exam \#1 will be held in class on 10/07/2019.
Topics covered up to the class prior to the exam are all in-scope for this exam.
(In other words, all topics covered in the first half of this course are fair game.)

Exam \#2 will be held in class on 11/08/2019.
Topics covered between the first exam and up to the class prior to the exam are all in-scope for this exam.
(In other words, all topics covered in the second half of this course are fair game.)

If you are unable to attend class on these days,
    you must meet with me ***at least 1 week*** prior to the scheduled date of the exam to arrange an alternative date/time/location to take the exam.

***Exam resources are TBD.***

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

Any sample solutions that are released will be posted on [D2L]({{site.data.settings.d2l}}).

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

Read: [How To Ask Questions The Smart Way, Eric Steven Raymond](http://www.catb.org/esr/faqs/smart-questions.html)

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
