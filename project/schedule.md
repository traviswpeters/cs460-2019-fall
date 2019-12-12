---
layout: default
teams:

 - id: team-andersen-cathelineau-matveyev
   members: 'Olexandr Matveyev, Ellen Marie Anderson, Benjamin Cathelineau'
   title: "Scheduling in Linux - CFS and Its Implementation (Tech Report)"
   date: 2019-11-20
   time: '@ 8am'

 - id: team-folkman-turksonmez
   members: 'Parker Folkman, Kemal Turksonmez'
   title: 'A Microkernel for Raspberry Pi (PoC)'
   date: 2019-12-02
   time: '@ 8am'

 - id: team-frank-tice
   members: 'Dillon Tice, Jakob Frank'
   title: 'Process Management on Commodity OSs (Tech Report)'
   date: 2019-12-02
   time: '@ 8am'

 - id: team-mccoy-oneil
   members: "Brad McCoy, Gage O’Neil"
   title: 'Understanding Problems In Concurrency Using Directed Topology and Homotopy Theory (Tech Report)'
   date: 2019-12-02
   time: '@ 8am'

 - id: team-boland-johnson-zakrzewski
   members: 'Jimmy Boland, Andrew Johnson, Eric Zakrzewski'
   title: 'Extending the Arduino Real Time Kernel (PoC)'
   date: 2019-12-04
   time: '@ 8am'
   code: 'https://github.com/Alatec/ARTK_Extentions'

 - id: team-roberts
   members: 'Nathan Roberts'
   title: 'Concurrency on iOS (PoC)'
   date: 2019-12-04
   time: '@ 8am'
   code: 'https://github.com/nathanroberts7/ios-concurrency'

 - id: team-weimer
   members: 'Max Weimer'
   title: 'Microarchitectural Issues & OSs'
   date: 2019-12-04
   time: '@ 8am'

 - id: team-bushnell-seeley-taylor
   members: 'Ben Bushnell, Michael Seeley, Zach Taylor'
   title: 'A Mini Kernel - Popcorn (PoC)'
   date: 2019-12-06
   time: '@ 8am'
   code: 'https://github.com/2altoids/boot-popcorn'

 - id: team-johnson-clayton-parrish
   members: 'Rial Johnson, Rusty Clayton, Tim Parrish'
   title: 'Comparative Evaluation of Scheduling Algorithms (PoC)'
   date: 2019-12-06
   time: '@ 8am'

 - id: team-rorabaugh
   members: 'Tyler Rorabaugh'
   title: 'Technical Analysis of Early Personal Computers (Tech Report)'
   date: 2019-12-06
   time: '@ 8am'

 - id: team-austin-rust-wall
   members: 'Gavin Austin, Nicholas Rust, Ren Wall'
   title: 'Thread Optimizations (PoC)'
   date: 2019-12-12
   time: '@ 8am'

 - id: team-engel-jacobson-kingsley
   members: 'George Engel, Derek Jacobson, William Kingsley'
   title: 'Emulation: A Simple VM (PoC)'
   date: 2019-12-12
   time: '@ 8am'

 - id: team-kristiansen-baker
   members: 'Brendan Kristiansen, Grant Baker'
   title: 'Virtual Memory on an Array of FRAM Chips (PoC)'
   date: 2019-12-12
   time: '@ 8am'
   code: 'http://www.bek.sh/website-external/fram-vmem.tar.gz'

 - id: team-major-radovich
   members: 'Chris Major, Tysen Radovich'
   title: 'Linux on an FPGA (PoC)'
   date: 2019-12-12
   time: '@ 8am'
   code: 'https://github.com/chrismajor2124/CSCI460_Final_Project_Yocto_on_Microblaze'

 - id: team-pearsall-pappas-legrande-cooper
   members: 'Reese Pearsall, Logan Pappas, Dallas LeGrande, Chris Cooper'
   title: 'An Exploration of Ransomware (Tech Report)'
   date: 2019-12-12
   time: '@ 8am'

 - id: team-wheeler
   members: 'Kayla Wheeler'
   title: 'Energy Awareness (Tech Report)'
   date: 2019-12-12
   time: '@ 8am'
---

<!-- HEADER -->

<div class="subpage-header" markdown="1">
### **Final Project --- Teams & Presentations**
{:.text-center}
###### ***Project Proposal Due:*** *{{ site.data.settings.project.due-proposal }}*
{:.text-center}
###### ***All Project Deliverables Due:*** *{{ site.data.settings.project.due-final }}*
{:.text-center}
</div>

<!-- ## Final Project Teams & Presentations -->
{% assign sorted = page.teams | group_by: 'date' | sort: 'name' %}
{% for group in sorted %}

<br/>

### <span class="note">**{{group.name | date: "%A, %B %d, %Y" }} {{group.items[0].time}}**</span>
{:.text-center}

{% for team in group.items %}
<div markdown="1">
<!-- team name and project title -->
**{{team.title}}**  
{{team.members}}  
<!-- static files -->
{% for f in site.static_files %}{% if f.path contains team.id %}[{{ f.basename }}]({{ site.baseurl }}{{ f.path }}){:.{{f.basename}}} {% endif %}{% endfor %}
<!-- code will likely be an external link... -->
{% if team.code %}[code]({{team.code}}){:.code}{% endif %}
</div>
{:.text-center}
{% endfor %}

{% endfor %}











{% comment %}

{:.table .table-hover .table-striped .table-bordered .table-sm}
| Presentations  | Teams, Project Resources, Etc.
| **Day 0**      | <span class="note">Wednesday, November 20, 2019</span>
| -------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
|                | Olexandr Matveyev, Ellen Marie Anderson,  Benjamin Cathelineau --- **Scheduling in Linux - CFS and It's Implementation (Tech Report)** {{team-andersen-cathelineau-matveyev-proposal}} {{team-andersen-cathelineau-matveyev-slides}} {{team-andersen-cathelineau-matveyev-report}}
| ~~**Day 1**~~  | <span class="note">~~Friday, November 22, 2019~~</span> --- _**PRESENTATIONS RESCHEDULED TO FINAL EXAM SLOT**_{:.text-danger}
| -------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
|                | ~~George Engel, Derek Jacobson, William Kingsley --- **Emulation: A Simple VM (PoC)**~~
|                | ~~Tyler Rorabaugh --- **Technical Analysis of Early Personal Computers (Tech Report)**~~
|                | ~~Gavin Austin, Nicholas Rust, Ren Wall --- **Thread Optimizations (PoC)**~~
| ~~**Day 2**~~  | <span class="note">~~Monday, November 25, 2019~~</span>  --- _**PRESENTATIONS RESCHEDULED TO FINAL EXAM SLOT**_{:.text-danger}
| -------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
|                | ~~Rial Johnson, Rusty Clayton, Tim Parrish --- **Comparative Evaluation of Scheduling Algorithms (PoC)**~~
|                | ~~Reese Pearsall, Logan Pappas, Dallas LeGrande, Chris Cooper --- **An Exploration of Ransomware (Tech Report)**~~
|                | ~~Kayla Wheeler --- **Energy Awareness (Tech Report)**~~
| **Day 1**      | <span class="note">Monday, December 2, 2019</span>
| -------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
|                | Parker Folkman, Kemal Turksonmez --- **A Microkernel for Raspberry Pi (PoC)** {{team-folkman-turksonmez-proposal}} {{team-folkman-turksonmez-slides}}
|                | Brad McCoy, Gage O’Neil --- **Understanding Problems In Concurrency Using Directed Topology and Homotopy Theory (Tech Report)** {{team-mccoy-oneil-proposal}} {{team-mccoy-oneil-slides}}
|                | Dillon Tice, Jakob Frank --- **Process Management on Commodity OSs (Tech Report)** {{team-frank-tice-proposal}} {{team-frank-tice-slides}}
| **Day 2**      | <span class="note">Wednesday, December 4, 2019</span>
| -------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
|                | Jimmy Boland, Andrew Johnson, Eric Zakrzewski --- **Extending the Arduino Real Time Kernel (PoC)** {{team-boland-johnson-zakrzewski-proposal}} {{team-boland-johnson-zakrzewski-code}}
|                | Nathan Roberts --- **Concurrency on iOS (PoC)** {{team-roberts-proposal}} {{team-roberts-slides}} {{team-roberts-code}}
|                | Max Weimer --- **Microarchitectural Issues & OSs**
| **Day 3**      | <span class="note">Friday, December 6, 2019</span>
| -------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
|                | Ben Bushnell, Michael Seeley, Zach Taylor --- **A Mini Kernel - Popcorn (PoC)** {{team-bushnell-seeley-taylor-proposal}}
|                | Brendan Kristiansen, Grant Baker --- **Virtual Memory on an Array of FRAM Chips (PoC)** {{team-kristiansen-baker-proposal}}
|                | Rial Johnson, Rusty Clayton, Tim Parrish --- **Comparative Evaluation of Scheduling Algorithms (PoC)** {{team-johnson-clayton-parrish-proposal}} {{team-johnson-clayton-parrish-slides}}
| **Day 4**      | <span class="note">Thursday, December 12, 2019 (8:00am - 9:50am)</span> --- _**PRESENTATION MAKE-UP SLOT DURING FINAL EXAM TIME FOR CSCI 460 (8:00AM - 9:50AM)**_{:.text-danger}
| -------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
|                | George Engel, Derek Jacobson, William Kingsley --- **Emulation: A Simple VM (PoC)** {{team-engel-jacobson-kingsley-proposal}}
|                | Tyler Rorabaugh --- **Technical Analysis of Early Personal Computers (Tech Report)** {{team-rorabaugh-proposal}} {{team-rorabaugh-slides}} {{team-rorabaugh-report}}
|                | Gavin Austin, Nicholas Rust, Ren Wall --- **Thread Optimizations (PoC)** {{team-austin-rust-wall-proposal}}
|                | Chris Major, Tysen Radovich --- **Linux on an FPGA (PoC)** {{team-major-radovich-proposal}}
|                | Reese Pearsall, Logan Pappas, Dallas LeGrande, Chris Cooper --- **An Exploration of Ransomware (Tech Report)** {{team-pearsall-pappas-legrande-cooper-proposal}}
|                | Kayla Wheeler --- **Energy Awareness (Tech Report)** {{team-wheeler-proposal}}
| -------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------

{% endcomment %}
