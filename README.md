# Agohya Lang

## The upcoming (under-development) programming language by NBRG Developers

### We are actively looking for collaborators for this open source, community-driven programming language. For contributing, see [CONTRIBUTING.md](https://github.com/agohya/lang/tree/master/CONTRIBUTING.md)

### Features (Proposed)

* All operators `(+, -, *, /, %)`
* Functions Support
* Static Typing
* `NULL Safe` Types
* Platform Independence
* Should run on (List in order of priority of implementation.):

     1. Windows
     2. Linux
     3. MacOS

### Far Sighted Features/Goals
* Built-In Modern UI Library
* Cross-Platform Apps Support
    * Should Run On 
      1. Android
      2. iOS
      3. Web (WASM, JS not intended) (SEO and SSR INTENDED BUT NOT CONFIRMED)
      4. Desktop Platforms Too.
      
    * Provide Access to Platform Specific APIs

### Information About The Tech Stack to use

We are keen on using the following tech-stack to keep this language as modern and fast as possible.

### Agohya Lang is going to be an AOT compiled language with support for JIT compilation in debug mode

* Antlr4 to generate Lexer/Parser.
* Direct LLVM IR Generation Using Visitors/Listeners.
* LLVM optimization on the IR
* LLVM compilation to machine code/Assembly Code (yet to decide)
