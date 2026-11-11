extern char D_00171F4C[];
extern void *func_0755B0(char *, void *, void *, int);

void *PAR_Emit__FPiii(char *record, int index, int extra)
{
    char *entry = D_00171F4C + index * 40;
    return func_0755B0(record, entry + 16, entry, extra);
}
