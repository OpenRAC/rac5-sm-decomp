extern char D_0027FA4C[];
extern void *func_0939F8(char *, void *, void *, int);

void *PAR_Emit__FPiii(char *record, int index, int extra)
{
    char *entry = D_0027FA4C + index * 40;
    return func_0939F8(record, entry + 16, entry, extra);
}
