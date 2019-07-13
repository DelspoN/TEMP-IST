# ICEWALL SECURITY TRAINING

## Web Hacking

### Curriculum

- [x] Web
  - [x] HTML
  - [x] Javascript
  - [x] SQL
- [x] Web Hacking
  - [x] CSRF
  - [x] XSS
  - [x] SQL Injection
- [ ] Tools

### Recommended Tools

- [ ] Chrome
- [ ] Postman
- [ ] Fiddler



## System Hacking

### Curriculum

- [x] Basic Reversing
- [x] Command Injection
- [x] Stack Buffer Overflow
  - [x] 32bit Calling Convention
  - [x] Basic
  - [x] Shellcode
  - [x] Canary
  - [ ] Return Oriented Programming
  - [ ] Return to Libc
  - [ ] 64bit Calling Convention

### Required

- [ ] Ubuntu 16.04 또는 Ubuntu 18.04
- [ ] python 2.7
- [ ] pwntools
- [ ] gcc
- [ ] 32bit 실행 환경
- [ ] gdb 
- [ ] gdb-peda
- [ ] IDA Pro

### Preparation

`python` & `pwntools`

```
sudo apt install python2.7 python-pip
pip install pwntools
```

`gcc` 설치

```
sudo apt install gcc
```

32bit 실행 환경

```
sudo dpkg --add-architecture i386
sudo apt-get update
sudo apt-get install libc6:i386 libncurses5:i386 libstdc++6:i386 zlib1g:i386
```

`gdb` 설치

```
sudo apt install gdb 
```

`gdb-peda` 설치

```
git clone https://github.com/longld/peda.git ~/peda
echo "source ~/peda/peda.py" >> ~/.gdbinit
echo "DONE! debug your program with gdb and enjoy"
```