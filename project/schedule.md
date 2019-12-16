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
   code: 'https://github.com/TimParrish/CSCI460FinalProject'

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
   code: 'https://github.com/Geo3ngel/CHIP-8-Emulator'

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
