#include <stdio.h>

int login() {
  char id[32], pw[32], nic[32];
  int auth;

  printf("Here is stack addr : %p\n", &nic);

  puts("Input your ID : ");
  scanf("%31s", id);
  puts("Input your PW : ");
  scanf("%31s", pw);

  auth = (!strcmp(id, "admin")  && !strcmp(pw, "p@ssw0rd"));

  puts("Input your nicname");
  read(0, nic, 0x100);

  if (auth) {
    printf("Hello ");
    puts(nic);
    return 1;
  }

  return 0;
}

int main() {
  int isAuth = 0;

  while (1) {
    if (login() || isAuth) {
      system("echo 'Successful'");
    }
    else {
      system("echo 'Failed'");
    }
  }

  return 0;
}
