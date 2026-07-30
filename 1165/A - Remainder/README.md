<h2><a href="https://codeforces.com/contest/1165/problem/A" target="_blank" rel="noopener noreferrer">1165A — Remainder</a></h2>

| | |
|---|---|
| **Difficulty** | 1100 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1165A](https://codeforces.com/contest/1165/problem/A) |

## Topics
`implementation` `math`

---

## Problem Statement

<div class="header"><div class="title">A. Remainder</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are given a huge decimal number consisting of $$$n$$$ digits. It is guaranteed that this number has no leading zeros. Each digit of this number is either <span class="tex-font-style-tt">0</span> or <span class="tex-font-style-tt">1</span>.</p><p>You may perform several (possibly zero) operations with this number. During each operation you are allowed to change any digit of your number; you may change <span class="tex-font-style-tt">0</span> to <span class="tex-font-style-tt">1</span> or <span class="tex-font-style-tt">1</span> to <span class="tex-font-style-tt">0</span>. It is possible that after some operation you can obtain a number with leading zeroes, but it does not matter for this problem.</p><p>You are also given two integers $$$0 \le y  \lt  x  \lt  n$$$. Your task is to calculate the minimum number of operations you should perform to obtain the number that has remainder $$$10^y$$$ modulo $$$10^x$$$. In other words, the obtained number should have remainder $$$10^y$$$ when divided by $$$10^x$$$.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains three integers $$$n, x, y$$$ ($$$0 \le y  \lt  x  \lt  n \le 2 \cdot 10^5$$$) — the length of the number and the integers $$$x$$$ and $$$y$$$, respectively.</p><p>The second line of the input contains one decimal number consisting of $$$n$$$ digits, each digit of this number is either <span class="tex-font-style-tt">0</span> or <span class="tex-font-style-tt">1</span>. It is guaranteed that the first digit of the number is <span class="tex-font-style-tt">1</span>.</p></div><div class="output-specification"><div class="section-title">Output</div><p>Print one integer — the minimum number of operations you should perform to obtain the number having remainder $$$10^y$$$ modulo $$$10^x$$$. In other words, the obtained number should have remainder $$$10^y$$$ when divided by $$$10^x$$$.</p></div><div class="sample-tests"><div class="section-title">Examples</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0004898050552389077" id="id004012121232546113" class="input-output-copier">Copy</div></div><pre id="id0004898050552389077">11 5 2
11010100101
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id006054259173643919" id="id004148578881543904" class="input-output-copier">Copy</div></div><pre id="id006054259173643919">1
</pre></div><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id003615972577509715" id="id0023992548720723372" class="input-output-copier">Copy</div></div><pre id="id003615972577509715">11 5 1
11010100101
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id007129323171304305" id="id003031485412933238" class="input-output-copier">Copy</div></div><pre id="id007129323171304305">3
</pre></div></div></div><div class="note"><div class="section-title">Note</div><p>In the first example the number will be $$$11010100100$$$ after performing one operation. It has remainder $$$100$$$ modulo $$$100000$$$.</p><p>In the second example the number will be $$$11010100010$$$ after performing three operations. It has remainder $$$10$$$ modulo $$$100000$$$.</p></div>