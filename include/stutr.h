#ifndef STUTR_H_
#define STUTR_H_

int has_opt(int ac, char **av, char opt);
int helper();
int no_option(int argc, char **argv);
int translate(char *to_replace, char *substitutes);
int stu_strlen(char *str);
int core_tr(char *to_replace, char *substitutes, char *buffer);
int core_dlt(int check, int count, char *to_delete, char *buffer);
int core_kp(int count, char *to_keep, char *buffer, int check, int amount_dl);
int conservation(char *to_keep);
int delete(char *to_delete);
int arg_err(char *file_name);

#endif
