/* LEVEL_07:0x173FD0 -- runs the two per-slot helpers on each of the three slot pointers of the linked record, then releases and clears the record's extra pointer. */
extern void func_06F280(char *record);
extern void func_06ED48(char *object);
extern void func_082CA0(char *record);

void func_173FD0(char *o)
{
    char *rec = *(char **)(o + 0x58);
    char **slot = (char **)rec;
    unsigned int i;

    for (i = 0; i < 3; i++) {
        func_06F280(slot[i]);
        func_06ED48(slot[i]);
    }
    if (*(char **)(rec + 0x30) != 0) {
        func_082CA0(*(char **)(rec + 0x30));
        *(char **)(rec + 0x30) = 0;
    }
}
