extern char D_001EDE8C[];
extern void *func_087F60(char *, void *, void *, int);

void *func_088318(char *record, int index, int extra)
{
    char *entry = D_001EDE8C + index * 40;
    return func_087F60(record, entry + 16, entry, extra);
}
