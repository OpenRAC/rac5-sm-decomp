extern char D_001B030C[];
extern void *func_07B0C8(char *, void *, void *, int);

void *PAR_Emit__FPiii(char *record, int index, int extra)
{
    char *entry = D_001B030C + index * 40;
    return func_07B0C8(record, entry + 16, entry, extra);
}
