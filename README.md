# SRE Learning Roadmap: C Language + Linux Internals + eBPF

---

## Phase 1: C Language Fundamentals (Beginner to Intermediate)

### Core Concepts
- [ ] Variables, Data Types (`int`, `char`, `unsigned`, etc.)
- [ ] Operators (arithmetic, logical, bitwise)
- [ ] Control Structures (`if`, `for`, `while`, `switch`)
- [ ] Functions (arguments, return values, recursion)
- [ ] Arrays, Strings (and `string.h` functions)
- [ ] Pointers (single/double, pointer arithmetic)
- [ ] Structures, Unions, Enums
- [ ] `typedef`, `#define`, `const`, macros
- [ ] Input/Output (`stdio.h`, `scanf`, `printf`, `fopen`, `fread`, etc.)
- [ ] Dynamic Memory (`malloc`, `calloc`, `free`)
- [ ] File I/O (`fopen`, `fwrite`, `fseek`)
- [ ] Error handling (`errno`, `perror`)
- [ ] Command-line arguments (`argc`, `argv`)
- [ ] Makefiles and basic `gcc` usage
- [ ] Debugging with `gdb`

---

## Phase 2: Linux System Programming (User Space)

### System Calls & Process Management
- [ ] `fork()`, `exec*()`, `wait()`, `exit()`
- [ ] Environment variables (`environ`)
- [ ] `getpid()`, `getppid()`, `kill()`, `signal()`, `sigaction()`
- [ ] Daemon processes

### File and Directory Operations
- [ ] `open`, `read`, `write`, `close`, `lseek`
- [ ] File permissions, `chmod`, `umask`
- [ ] `stat`, `fstat`, `lstat`
- [ ] `mkdir`, `rmdir`, `unlink`, `rename`
- [ ] Directory reading (`opendir`, `readdir`)

### Advanced I/O
- [ ] File descriptors
- [ ] `select`, `poll`, `epoll`
- [ ] Non-blocking I/O

### Threads & Concurrency
- [ ] Basics of `pthread` library
- [ ] `pthread_create`, `pthread_join`
- [ ] Mutexes, Condition Variables

### Inter-Process Communication (IPC)
- [ ] Pipes (anonymous and named)
- [ ] Shared memory (`shmget`, `shmat`)
- [ ] Message queues
- [ ] Semaphores
- [ ] Sockets (UNIX domain)

---

## Phase 3: Linux Internals & Operating System Concepts

### Memory & Processes
- [ ] Virtual Memory (stack, heap, mmap, brk)
- [ ] Page Tables, Page Faults, Swapping
- [ ] Process Lifecycle, Context Switching
- [ ] Scheduling Basics (`nice`, `sched_*`)
- [ ] Signals and traps

### File Systems & Storage
- [ ] VFS (Virtual File System)
- [ ] Inodes, dentry, file structures
- [ ] ext4/xfs basics
- [ ] Mounting, Loopback devices
- [ ] Journaling

### Networking Internals
- [ ] Linux Network Stack overview
- [ ] Sockets, packet flow
- [ ] Netfilter / iptables / nftables
- [ ] TCP/IP layers in Linux

### Kernel Threads & Synchronization
- [ ] Kernel vs user threads
- [ ] Spinlocks, semaphores, atomic ops
- [ ] `wait_queue`, `completion`

### Tracing & Observability
- [ ] `strace`, `ltrace`
- [ ] `perf`
- [ ] `/proc` and `/sys` interfaces
- [ ] `top`, `htop`, `vmstat`, `iostat`, `netstat`, `ss`

---

## Phase 4: Prepping for eBPF & Performance Tracing

### Prerequisites
- [ ] Strong in C (structs, pointers, bit ops)
- [ ] Comfortable with Linux system calls and internals
- [ ] Understand how tracing tools work (`strace`, `perf`, `ftrace`)
- [ ] Kernel/user-space boundary knowledge

### Topics to Review
- [ ] Kernel data structures (`task_struct`, `file`, `mm_struct`)
- [ ] Syscall hooks and tracepoints
- [ ] Maps, structs, ring buffers (eBPF concepts)
- [ ] ELF format basics

---

## Project List for Practice and Portfolio

### Beginner Projects
1. **Tic-Tac-Toe Terminal Game** — Input handling, logic
2. **Custom `ls` Implementation** — Directory traversal, file info
3. **Memory Allocator (`malloc` Clone)** — Heap management, `brk`/`mmap`

### Intermediate Projects
4. **Simple Shell** — `fork()`, `exec()`, prompt
5. **Syslog File Monitor** — File descriptors, real-time log scanning
6. **Multi-client Chat Server** — TCP, sockets, `select()`
7. **Mini `ps` Utility** — `/proc` parsing, process state

### Advanced Projects
8. **Mini `top`/`htop` Tool** — Live CPU/mem/process monitor
9. **System Call Tracer (`strace` clone)** — `ptrace`, syscall logging
10. **eBPF Tracer** — `bpftrace`, syscall latency monitor

---

## Bonus Topics
- [ ] Shell scripting and `bash` internals
- [ ] `awk`, `sed`, `cut`, `xargs`, `jq`
- [ ] Docker and container internals (`cgroups`, `namespaces`)
- [ ] Monitoring tools: `prometheus`, `grafana`, `node_exporter`
- [ ] Log aggregation: `journald`, `rsyslog`, `logrotate`

---

✅ Tip: Tackle one topic/project at a time, and document your learning. Each project should have a clean GitHub repo with a `README.md`, demo GIF or screenshots, and explanation of what you learned.


