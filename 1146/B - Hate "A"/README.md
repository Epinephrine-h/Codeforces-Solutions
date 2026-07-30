<h2><a href="https://codeforces.com/contest/1146/problem/B" target="_blank" rel="noopener noreferrer">1146B — Hate "A"</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1146B](https://codeforces.com/contest/1146/problem/B) |

## Topics
`implementation` `strings`

---

## Problem Statement

<div class="header"><div class="title">B. Hate "A"</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>Bob has a string $$$s$$$ consisting of lowercase English letters. He defines $$$s'$$$ to be the string after removing all "<span class="tex-font-style-tt">a</span>" characters from $$$s$$$ (keeping all other characters in the same order). He then generates a new string $$$t$$$ by concatenating $$$s$$$ and $$$s'$$$. In other words, $$$t=s+s'$$$ (look at notes for an example).</p><p>You are given a string $$$t$$$. Your task is to find some $$$s$$$ that Bob could have used to generate $$$t$$$. It can be shown that if an answer exists, it will be unique.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of input contains a string $$$t$$$ ($$$1 \leq |t| \leq 10^5$$$) consisting of lowercase English letters.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print a string $$$s$$$ that could have generated $$$t$$$. It can be shown if an answer exists, it is unique. If no string exists, print "<span class="tex-font-style-tt">:(</span>" (without double quotes, there is no space between the characters).</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006224288014629038" id="id008807213783409247" class="input-output-copier">Copy</div></div><pre id="id006224288014629038">aaaaa
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0005001839482831649" id="id007998817207610448" class="input-output-copier">Copy</div></div><pre id="id0005001839482831649">aaaaa
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0020686249090325348" id="id006113735089225172" class="input-output-copier">Copy</div></div><pre id="id0020686249090325348">aacaababc
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id009920067264080105" id="id006889158127419118" class="input-output-copier">Copy</div></div><pre id="id009920067264080105">:(
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0025811058393891684" id="id008707418228203098" class="input-output-copier">Copy</div></div><pre id="id0025811058393891684">ababacacbbcc
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0012974138634289722" id="id0019031772477438125" class="input-output-copier">Copy</div></div><pre id="id0012974138634289722">ababacac
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id006930784797978887" id="id0021320146746219193" class="input-output-copier">Copy</div></div><pre id="id006930784797978887">baba
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0033544780574745425" id="id008220244245451764" class="input-output-copier">Copy</div></div><pre id="id0033544780574745425">:(
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example, we have $$$s = $$$ "<span class="tex-font-style-tt">aaaaa</span>", and $$$s' = $$$ "<span class="tex-font-style-tt"></span>".</p><p>In the second example, no such $$$s$$$ can work that will generate the given $$$t$$$.</p><p>In the third example, we have $$$s = $$$ "<span class="tex-font-style-tt">ababacac</span>", and $$$s' = $$$ "<span class="tex-font-style-tt">bbcc</span>", and $$$t = s + s' = $$$ "<span class="tex-font-style-tt">ababacacbbcc</span>".</p></div>