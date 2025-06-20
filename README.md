# 🚀 expOS & OS Experiments Repository

This repository is a comprehensive archive of my operating systems projects and experiments, including a custom educational OS (`expOS`) implemented in 16 stages, as well as standalone OS-related C programs demonstrating advanced OS concepts.

---

## 📂 Repository Structure

```
├── expos/                      # expOS implementation (16 learning stages)
│   ├── myexpos/                # Your custom configurations and extensions
│   ├── stage1/                 # Stage 1: Bootloader & kernel entry
│   ├── stage2/                 # Stage 2: Interrupt handling & context switching
│   ├── stage3/                 # Stage 3: System call interface
│   ├── stage4/                 # Stage 4: Process creation & scheduling
│   ├── stage5/                 # Stage 5: Synchronization primitives (mutexes)
│   ├── stage6/                 # Stage 6: Inter-Process Communication (pipes)
│   ├── stage7/                 # Stage 7: Virtual memory & paging
│   ├── stage8/                 # Stage 8: File system basics
│   ├── stage9/                 # Stage 9: Device drivers & I/O
│   ├── stage10/                # Stage 10: Advanced scheduling (MLFQ)
│   ├── stage11/                # Stage 11: Kernel modules & loadable drivers
│   ├── stage12/                # Stage 12: Deadlock detection & avoidance
│   ├── stage13/                # Stage 13: Memory management enhancements
│   ├── stage14/                # Stage 14: Networking stack basics
│   ├── stage15/                # Stage 15: Security features (access control)
│   └── stage16/                # Stage 16: Performance tuning & profiling
│
└── os/                         # OS concept demos in user-space C programs
    ├── Inter_process_communication/   # Examples: pipes, message queues, shared memory
    ├── file_related_system_calls/    # Examples: open, read, write, lseek, mmap
    ├── process_related_system_calls/ # Examples: fork, exec, wait, signals
    ├── hello.c                        # Simple "Hello, World" via write syscall
    ├── prog.c                         # Sample program illustrating system call wrappers
    ├── test.out                       # Sample program output
    └── a.out                          # Compiled binaries for quick reference
```

---

## 🔍 expOS Overview

`expOS` is an educational operating system that I built incrementally through 16 stages, each introducing and implementing core OS concepts:

1. **Bootloader & Kernel Entry** – Set up multiboot header, switch to protected mode.
2. **Interrupts & Context Switching** – Configure IDT, handle timer and keyboard interrupts, save/restore CPU state.
3. **System Call Interface** – Define syscall table, trap gate, user–kernel boundary.
4. **Process Management** – Implement `fork()`, `exit()`, and a basic round‑robin scheduler.
5. **Synchronization** – Build mutex locks and semaphores to protect shared data.
6. **Pipes & IPC** – Implement unidirectional pipes for parent–child communication.
7. **Virtual Memory** – Set up page directories/tables, enable paging, user address spaces.
8. **File System** – Design a simple on‑disk file system, directory structure, file operations.
9. **Device Drivers** – Develop basic keyboard and screen drivers using I/O ports.
10. **Advanced Scheduling** – Multi‑Level Feedback Queue (MLFQ) scheduler for interactive fairness.
11. **Kernel Modules** – Loadable modules interface for extending kernel at runtime.
12. **Deadlock Handling** – Detect resource cycles, implement Banker’s algorithm.
13. **Memory Enhancements** – Lazy loading, demand paging, page replacement algorithms (LRU).
14. **Networking Basics** – Simple socket layer, packet send/receive (loopback).
15. **Security** – User permissions, access control lists (ACLs), ring protection.
16. **Performance & Profiling** – Kernel profiling hooks, statistics collection, optimizations.

Each `stageN/` directory contains source code, build scripts (Makefile), and README snippets describing how to build and test that stage.

---

## 🛠️ Building & Running expOS

```bash
cd expos/stage1            # or any stage directory
make                       # builds the kernel image (kernel.bin)
make run                   # launches in QEMU for testing
```

Progress incrementally through the stages by changing into the next `stageN/` folder.

---

## 🖥️ OS Experiments (User‑Space Demos)

The `os/` directory holds standalone C programs illustrating various OS concepts via Linux system calls:

* **Inter-Process Communication** (`Inter_process_communication/`)

  * Named and unnamed pipes, message queues, shared memory examples.
* **File-Related System Calls** (`file_related_system_calls/`)

  * Demonstrations of `open`, `read`, `write`, `lseek`, `mmap`, and `fsync`.
* **Process-Related System Calls** (`process_related_system_calls/`)

  * Examples of `fork`, `execve`, `waitpid`, `kill`, and signal handling.
* **hello.c** – A minimal program using the `write()` syscall.
* **prog.c** – Wrapper functions for common syscalls, plus test routines.

### Building & Running OS Demos

```bash
cd os/Inter_process_communication
gcc *.c -o ipc_demo
./ipc_demo
```

Adjust paths and filenames as needed. Each subfolder includes a mini-README with compilation instructions.

---

## 📈 Advanced OS Concepts Implemented

* **Kernel Development**: Bootloader, protected mode, interrupts, context switching.
* **Process & Thread Management**: Creation, scheduling, context switching, signals.
* **Memory Management**: Paging, segmentation, page replacement, demand paging.
* **File Systems**: On‑disk FS design, VFS layer, metadata and data block management.
* **Concurrency**: Mutexes, semaphores, condition variables, deadlock detection.
* **Inter-Process Communication**: Pipes, message queues, shared memory, sockets.
* **Device Drivers**: Character drivers for keyboard and display, I/O port programming.
* **Security & Protection**: Privilege rings, access control, user/group permissions.
* **Networking**: Basic socket interface, loopback packet handling.
* **Modularity & Extensibility**: Kernel modules, loadable driver framework.
* **Performance**: Profiling hooks, scheduling optimizations, memory allocator tuning.

---

## ✍️ Contributing

This is a personal learning archive. Contributions are welcome as pull requests, but please:

1. Fork the repo.
2. Create a feature branch (`git checkout -b feature/YourFeature`).
3. Commit your changes (`git commit -m 'Add XYZ concept demo'`).
4. Push to your branch (`git push origin feature/YourFeature`).
5. Open a Pull Request describing your additions.
