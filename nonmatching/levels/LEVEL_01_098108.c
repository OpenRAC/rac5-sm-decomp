/* LEVEL_01.REL:0x098108 -- takes a node from a block-backed free list. */
typedef unsigned int u32;

extern int *D_00298290;

int *func_098108(int *owner)
{
    int *node = (int *)owner[2];
    int *result = node;

    if (node == owner + 1) {
        int *block = (int *)owner[0];
        int *first = block + 1;
        int *last = block + 0x1D;
        int *current = block + 5;
        int *previous = node;
        int *pool;
        int address;

        owner[0] = block[0x21];
        pool = D_00298290;
        address = pool[2];
        D_00298290 = (int *)pool[1];
        block[0] = (int)pool;
        first[2] = address;
        address += 0x200;

        while (current != last) {
            current[0] = (int)previous;
            current[2] = address;
            current[1] = (int)(current + 4);
            previous = current;
            current += 4;
            address += 0x200;
        }
        current[0] = (int)previous;
        current[2] = address;
        current[1] = owner[2];
        *(int *)owner[2] = (int)current;
        owner[2] = (int)first;
        block[0x22] = 1;
        result = first;
    } else {
        u32 base;
        u32 block_address;

        *(int *)(node[0] + 4) = node[1];
        *(int *)node[1] = node[0];
        base = (u32)owner[3];
        block_address = (((u32)node - base) / 0x8Cu) * 0x8Cu + base;
        (*(int *)(block_address + 0x88))++;
    }
    return result;
}
