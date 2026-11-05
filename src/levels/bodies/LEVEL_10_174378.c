extern void func_07CCA0(void *, int);

void func_174378(char *record)
{
    char *base = *(char **)(record + 0x58);
    char *target = *(char **)(base + 0x220);
    *(unsigned short *)(target + 0x74) =
        *(unsigned short *)(base + 0x224);
    func_07CCA0(record, 1);
}
