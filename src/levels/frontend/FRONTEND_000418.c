/* FRONTEND:0x000418 -- compares the argument with two tables. */
extern int strncmp(const char *, const char *, unsigned int);
extern int D_00027E08;
extern char D_00106918[];

int func_000418(char *param_1)
{
    if (strncmp(param_1, (char *)D_00027E08, 0x80) != 0) {
        if (strncmp(param_1, D_00106918, 4) != 0)
            return 0;
        return 0xC350;
    }
    return 0x20C;
}
