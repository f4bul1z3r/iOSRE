#ifndef _SYSCALLS_x86_64_H
#define _SYSCALLS_x86_64_H 1
#include "sanitise.h"
#include "syscall.h"
#include "syscalls/syscalls.h"
struct syscalltable syscalls_bsd[] = {
  { .entry = 0 },
  { .entry = &syscall_exit },
  { .entry = &syscall_fork },
  { .entry = &syscall_read },
  { .entry = &syscall_write },
  { .entry = 0 },
  { .entry = &syscall_close },
  { .entry = &syscall_wait4 },
  { .entry = 0 },
  { .entry = &syscall_link },
  { .entry = &syscall_unlink },
  { .entry = 0 },
  { .entry = &syscall_chdir },
  { .entry = &syscall_fchdir },
  { .entry = &syscall_mknod },
  { .entry = &syscall_chmod },
  { .entry = &syscall_chown },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_getpid },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_setuid },
  { .entry = &syscall_getuid },
  { .entry = &syscall_geteuid },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_accept },
  { .entry = &syscall_getpeername },
  { .entry = &syscall_getsockname },
  { .entry = &syscall_access },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_sync },
  { .entry = &syscall_kill },
  { .entry = 0 },
  { .entry = &syscall_getppid },
  { .entry = 0 },
  { .entry = &syscall_dup },
  { .entry = &syscall_pipe },
  { .entry = &syscall_getegid },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_getgid },
  { .entry = &syscall_sigprocmask },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_acct },
  { .entry = &syscall_sigpending },
  { .entry = &syscall_sigaltstack },
  { .entry = &syscall_ioctl },
  { .entry = &syscall_reboot },
  { .entry = 0 },
  { .entry = &syscall_symlink },
  { .entry = &syscall_readlink },
  { .entry = &syscall_execve },
  { .entry = &syscall_umask },
  { .entry = &syscall_chroot },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_msync },
  { .entry = &syscall_vfork },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_munmap },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_mincore },
  { .entry = &syscall_getgroups },
  { .entry = &syscall_setgroups },
  { .entry = &syscall_getpgrp },
  { .entry = &syscall_setpgid },
  { .entry = &syscall_setitimer },
  { .entry = 0 },
  { .entry = &syscall_swapon },
  { .entry = &syscall_getitimer },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_dup2 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_select },
  { .entry = 0 },
  { .entry = &syscall_fsync },
  { .entry = &syscall_setpriority },
  { .entry = 0 },
  { .entry = &syscall_connect },
  { .entry = 0 },
  { .entry = &syscall_getpriority },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_bind },
  { .entry = 0 },
  { .entry = &syscall_listen },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_sigsuspend },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_gettimeofday },
  { .entry = &syscall_getrusage },
  { .entry = &syscall_getsockopt },
  { .entry = 0 },
  { .entry = &syscall_readv },
  { .entry = &syscall_writev },
  { .entry = &syscall_settimeofday },
  { .entry = &syscall_fchown },
  { .entry = &syscall_fchmod },
  { .entry = 0 },
  { .entry = &syscall_setreuid },
  { .entry = &syscall_setregid },
  { .entry = &syscall_rename },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_flock },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_shutdown },
  { .entry = &syscall_socketpair },
  { .entry = &syscall_mkdir },
  { .entry = &syscall_rmdir },
  { .entry = &syscall_utimes },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_setsid },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_getpgid },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_statfs },
  { .entry = &syscall_fstatfs },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_quotactl },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_waitid },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_setgid },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_sigreturn },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_fdatasync },
  { .entry = &syscall_stat },
  { .entry = 0 },
  { .entry = &syscall_lstat },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_setrlimit },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_lseek },
  { .entry = &syscall_truncate },
  { .entry = &syscall_ftruncate },
  { .entry = 0 },
  { .entry = &syscall_mlock },
  { .entry = &syscall_munlock },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_poll },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_getxattr },
  { .entry = &syscall_fgetxattr },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_removexattr },
  { .entry = &syscall_fremovexattr },
  { .entry = &syscall_listxattr },
  { .entry = &syscall_flistxattr },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_semctl },
  { .entry = &syscall_semget },
  { .entry = &syscall_semop },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_msgget },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_shmat },
  { .entry = &syscall_shmctl },
  { .entry = &syscall_shmdt },
  { .entry = &syscall_shmget },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_gettid },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_getsid },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_mlockall },
  { .entry = &syscall_munlockall },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_sendfile },
  { .entry = &syscall_stat64 },
  { .entry = &syscall_fstat64 },
  { .entry = &syscall_lstat64 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_statfs64 },
  { .entry = &syscall_fstatfs64 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = &syscall_lchown },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
  { .entry = 0 },
};
#endif
