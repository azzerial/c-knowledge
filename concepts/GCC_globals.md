# GCC globals

Here's a list of useful GCC globals and predefined macros:



##### **`__FILE__`** 

The name/path of the current file.

> examples: `main.c`, `src/worker.c`



##### **`__LINE__`** 

The line index in the current file.

> example: `5`



##### **`__FUNCTION__`**

The name of the current function if any.

> examples: `log_message`



##### **`__DATE__`**

The date on which the program started running. (format: `MMM DD YYYY`)

> examples: `Feb 12 1996`, `Nov  4 2009`



##### **`__TIME__`**

The time at which the program started running. (format: `HH:MM:SS`)

> example: `23:59:01`



## Samples using this

[one-line-logger]: https://github.com/Azzerial/c-knowledge/tree/master/samples/logger/one_line_logger

* **[One line logger][one-line-logger]**



## Info

Uses GGC extension:  `false`



## Sources

[gcc-standard-predefined-macros]: https://gcc.gnu.org/onlinedocs/cpp/Standard-Predefined-Macros.html

* **[GCC Standard Predefined Macros][gcc-standard-predefined-macros]**