# Basic STDIO Software Pack

![tag](https://img.shields.io/badge/tag-2.0.0-brightgreen.svg)
[![release note](https://img.shields.io/badge/release_note-view_html-gold.svg)](https://htmlpreview.github.io/?https://github.com/STMicroelectronics/stm32-util-basic-stdio/blob/main/Release_Notes.html)

## Overview

The Basic STDIO is a minimal stdout redirection layer for STM32 that provides quick printf output through UART, ITM (SWO), or a custom input/output interface

## Description and Usage

### Description

Basic STDIO is a lightweight trace utility with a small footprint and low integration effort, designed for early board bring-up, firmware prototyping, and basic diagnostic tracing, and easy to integrate, remove, replace, or extend later.

Main features of Basic STDIO:

- Single init entry point
- Supports UART, ITM, or a custom interface
- Deterministic blocking output (character-by-character)
- Hides toolchain libc hook differences (_write, __write, fputc, etc.)

### Usage

The start-up sequence can be split into two steps:

### Step 1: Basic STDIO initialization

Initialize Basic STDIO with the selected interface handle by calling `BASIC_STDIO_Init(&io_handle)` for UART or custom interfaces, or with NULL when using ITM.

### Step 2: Trace sending

Send trace data using `printf(const char *fmt, ...)` over the configured interface.
