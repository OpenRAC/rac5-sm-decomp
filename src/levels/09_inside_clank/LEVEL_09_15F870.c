/* LEVEL_09:0x15F870 -- placement copy of LEVEL_07_173FD0.c: runs the two per-slot helpers on each of the three slot pointers of the linked record, then releases and clears the record's extra pointer. */
extern void func_06B000(char *record);
extern void func_06AAC8(char *object);
extern void func_07D5B8(char *record);

void func_15F870(char *o)
{
    char *rec = *(char **)(o + 0x58);
    char **slot = (char **)rec;
    unsigned int i;

    for (i = 0; i < 3; i++) {
        func_06B000(slot[i]);
        func_06AAC8(slot[i]);
    }
    if (*(char **)(rec + 0x30) != 0) {
        func_07D5B8(*(char **)(rec + 0x30));
        *(char **)(rec + 0x30) = 0;
    }
}
