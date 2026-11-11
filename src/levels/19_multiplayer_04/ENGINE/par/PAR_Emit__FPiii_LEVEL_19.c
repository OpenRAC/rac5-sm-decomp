extern char D_0024E88C[];
extern void *func_0882C0(char *, void *, void *, int);

void *PAR_Emit__FPiii(char *record, int index, int extra)
{
    char *entry = D_0024E88C + index * 40;
    return func_0882C0(record, entry + 16, entry, extra);
}
