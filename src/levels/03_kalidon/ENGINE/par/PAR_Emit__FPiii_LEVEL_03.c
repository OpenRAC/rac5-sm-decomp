extern char D_002B314C[];
extern void *func_096ED0(char *, void *, void *, int);

void *PAR_Emit__FPiii(char *record, int index, int extra)
{
    char *entry = D_002B314C + index * 40;
    return func_096ED0(record, entry + 16, entry, extra);
}
