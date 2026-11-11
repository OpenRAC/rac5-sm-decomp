/* LEVEL_18:0x145E10 -- placement copy of LEVEL_07_173FD0.c: runs the two per-slot helpers on each of the three slot pointers of the linked record, then releases and clears the record's extra pointer. */
extern void func_05D8F8(char *record);
extern void func_05D3C0(char *object);
extern void func_072D30(char *record);

void func_145E10(char *o)
{
    char *rec = *(char **)(o + 0x58);
    char **slot = (char **)rec;
    unsigned int i;

    for (i = 0; i < 3; i++) {
        func_05D8F8(slot[i]);
        func_05D3C0(slot[i]);
    }
    if (*(char **)(rec + 0x30) != 0) {
        func_072D30(*(char **)(rec + 0x30));
        *(char **)(rec + 0x30) = 0;
    }
}
