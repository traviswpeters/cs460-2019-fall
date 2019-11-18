---
layout: default
---

{% for f in site.static_files %}
{% if f.path contains 'team-' %}
<!-- {{f.path}} -->
{% endif %}
{% endfor %}

<!-- Variables -->

{% capture rorabaugh-slides %}[slides](/project/team-rorabaugh/final_presentation.pptx){:.slides}{% endcapture %}
{% capture rorabaugh-write-up %}[write-up](/project/team-rorabaugh/final_report.docx){:.write-up}{% endcapture %}
{% capture rorabaugh-code %}[code](){:.code}{% endcapture %}


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
| **Day 0**      |
| -------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
| 11/20/2019     | Olexandr Matveyev, Ellen Marie A,  Benjamin Cathelineau --- **Exploring Process Scheduling on Linux - The Completely Fair Scheduler (Tech Report)**
| **Day 1**      |
| -------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
| 11/22/2019     | George Engel, Derek Jacobson, William Kingsley --- **Emulation: A Simple VM (PoC)**
| 11/22/2019     | Tyler Rorabaugh --- **Technical Analysis of Early Personal Computers (Tech Report)** {{rorabaugh-slides}} {{rorabaugh-write-up}}
| 11/22/2019     | Gavin Austin, Nicholas Rust, Ren Wall --- **Thread Optimizations (PoC)**
| **Day 2**      |
| -------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
| 11/25/2019     | Rial Johnson, Rusty Clayton, Tim Parrish --- **Comparative Evaluation of Scheduling Algorithms (PoC)**
| 11/25/2019     | Reese Pearsall, Logan Pappas, Dallas LeGrande, Chris Cooper --- **An Exploration of Ransomware (Tech Report)**
| 11/25/2019     | Kayla Wheeler --- **Energy Awareness (Tech Report)**
| **Day 3**      |
| -------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
| 12/02/2019     | Parker Folkman, Kemal Turksonmez --- **A Microkernel for Raspberry Pi (PoC)**
| 12/02/2019     | Brad McCoy, Gage O’Neil --- **Understanding Problems In Concurrency Using Directed Topology and Homotopy Theory (Tech Report)**
| 12/02/2019     | Dillon Tice, Jakob Frank --- **Process Management on Commodity OSs (Tech Report)**
| **Day 4**      |
| -------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
| 12/04/2019     | Jimmy Boland, Andrew Johnson, Eric Zakrzewski --- **Extending the Arduino Real Time Kernel (PoC)**
| 12/04/2019     | Nathan Roberts --- **Concurrency on iOS (PoC)**
| 12/04/2019     | Max Weimer --- **Microarchitectural Issues & OSs**
| **Day 5**      |
| -------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
| 12/06/2019     | Ben Bushnell, Michael Seeley, Zach Taylor --- **A Mini Kernel - Popcorn (PoC)**
| 12/06/2019     | Brendan Kristiansen, Grant Baker --- **Virtual Memory on an Array of FRAM Chips (PoC)**
| 12/06/2019     | Chris Major, Tysen Radovich --- **Linux on an FPGA (PoC)**
| -------------- | -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------
