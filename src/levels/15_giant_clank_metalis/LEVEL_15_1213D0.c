/* LEVEL_15:0x1213D0 -- walks the chain of record blocks hanging off the object (+8) and runs the per-record routine on every 0x88-byte record of each block (record array at +0xC, count at +0x10, next block at +0). */
extern void func_120A80(char *record);

void func_1213D0(char *object)
{
    int *block;
    char *rec;
    char *end;

    block = *(int **)(object + 8);
    if (block != 0) {
        do {
            rec = (char *)block[3];
            end = rec + block[4] * 0x88;
            do {
                func_120A80(rec);
                rec = rec + 0x88;
            } while (rec != end);
            block = (int *)block[0];
        } while (block != 0);
    }
}
