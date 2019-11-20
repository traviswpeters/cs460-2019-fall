---
layout: default
---
<!--
{% for f in site.static_files %}
{% if f.path contains 'team-' %}
{{f.path}}
{% endif %}
{% endfor %}
 -->

<!-- Variables -->

{% assign team = 'andersen-cathelineau-matveyev' %}
{% capture andersen-cathelineau-matveyev-slides %}[slides]({{site.baseurl}}/project/team-{{team}}/slides.pdf){:.slides}{% endcapture %}
{% capture andersen-cathelineau-matveyev-report %}[report]({{site.baseurl}}/project/team-{{team}}/report.pdf){:.report}{% endcapture %}
<!-- {% capture {{team}}-code %}[code](){:.code}{% endcapture %} -->

{% assign team = 'rorabaugh' %}
{% capture rorabaugh-slides %}[slides]({{site.baseurl}}/project/team-{{team}}/slides.pdf){:.slides}{% endcapture %}
{% capture rorabaugh-report %}[report]({{site.baseurl}}/project/team-{{team}}/report.pdf){:.report}{% endcapture %}
<!-- {% capture {{team}}-code %}[code](){:.code}{% endcapture %} -->

### **Final Project**
{:.text-center}

###### ***Project Proposal Due:*** *{{ site.data.settings.project.due-proposal }}*
{:.text-center}

###### ***All Project Deliverables Due:*** *{{ site.data.settings.project.due-final }}*
{:.text-center}

<br/>

## Final Project Teams & Presentations

{:.table .table-hover .table-striped .table-bordered .table-sm}
| Presentations  | Teams, Project Resources, Etc.
| **Day 0**      | <span class="note">November 20, 2019</span>
| -------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
| 11/20/2019     | Olexandr Matveyev, Ellen Marie A,  Benjamin Cathelineau --- **Scheduling in Linux - CFS and It's Implementation (Tech Report)** {{andersen-cathelineau-matveyev-slides}} {{andersen-cathelineau-matveyev-report}}
| **Day 1**      | <span class="note">November 22, 2019</span>
| -------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
| 11/22/2019     | George Engel, Derek Jacobson, William Kingsley --- **Emulation: A Simple VM (PoC)**
| 11/22/2019     | Tyler Rorabaugh --- **Technical Analysis of Early Personal Computers (Tech Report)** {{rorabaugh-slides}} {{rorabaugh-report}}
| 11/22/2019     | Gavin Austin, Nicholas Rust, Ren Wall --- **Thread Optimizations (PoC)**
| **Day 2**      | <span class="note">November 25, 2019</span>
| -------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
| 11/25/2019     | Rial Johnson, Rusty Clayton, Tim Parrish --- **Comparative Evaluation of Scheduling Algorithms (PoC)**
| 11/25/2019     | Reese Pearsall, Logan Pappas, Dallas LeGrande, Chris Cooper --- **An Exploration of Ransomware (Tech Report)**
| 11/25/2019     | Kayla Wheeler --- **Energy Awareness (Tech Report)**
| **Day 3**      | <span class="note">December 2, 2019</span>
| -------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
| 12/02/2019     | Parker Folkman, Kemal Turksonmez --- **A Microkernel for Raspberry Pi (PoC)**
| 12/02/2019     | Brad McCoy, Gage O’Neil --- **Understanding Problems In Concurrency Using Directed Topology and Homotopy Theory (Tech Report)**
| 12/02/2019     | Dillon Tice, Jakob Frank --- **Process Management on Commodity OSs (Tech Report)**
| **Day 4**      | <span class="note">December 4, 2019</span>
| -------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
| 12/04/2019     | Jimmy Boland, Andrew Johnson, Eric Zakrzewski --- **Extending the Arduino Real Time Kernel (PoC)**
| 12/04/2019     | Nathan Roberts --- **Concurrency on iOS (PoC)**
| 12/04/2019     | Max Weimer --- **Microarchitectural Issues & OSs**
| **Day 5**      | <span class="note">December 6, 2019</span>
| -------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
| 12/06/2019     | Ben Bushnell, Michael Seeley, Zach Taylor --- **A Mini Kernel - Popcorn (PoC)**
| 12/06/2019     | Brendan Kristiansen, Grant Baker --- **Virtual Memory on an Array of FRAM Chips (PoC)**
| 12/06/2019     | Chris Major, Tysen Radovich --- **Linux on an FPGA (PoC)**
| -------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
