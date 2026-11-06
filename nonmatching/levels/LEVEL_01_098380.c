/* LEVEL_01.REL:0x098380: Ghidra body 192 bytes.
 * Pure C with `pinned` links 192 bytes and first differs at +4.
 * Recheck stride expression and pointer register scheduling. No matching credit.
 */
extern void func_0981F8(void *, int);

void func_098380(int *head, int *node)
{
    int base;
    int stride = 0x2c;
    int *block;
    int *cursor;
    node[0] = (int)(head + 1);
    node[1] = head[2];
    *(int *)head[2] = (int)node;
    head[2] = (int)node;
    base = head[3];
    block = (int *)((((int)node - base) / stride) * stride + base);
    block[10] = block[10] - 1;
    if (block[10] == 0) {
        cursor = block + 1;
        do {
            *(int *)(cursor[0] + 4) = cursor[1];
            *(int *)cursor[1] = cursor[0];
            cursor += 4;
        } while (cursor != block + 9);
        func_0981F8((void *)0x29829c, block[0]);
        block[9] = head[0];
        head[0] = (int)block;
    }
}
