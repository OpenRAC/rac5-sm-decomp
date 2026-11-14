/* LEVEL_06:0x025A50 -- placement copy of LEVEL_01_0275A0.c: adds a byte id to the bounded unique id list; returns 0 when the list is full or the id is already present, 1 when added. */
typedef struct {
    char pad0[0x1BE0];
    unsigned char ids[0x80];
    unsigned char count;
} IdList;

extern IdList *D_001E2EAC;

int func_025A50(unsigned int id)
{
    unsigned int i;
    unsigned int n;
    unsigned int k;
    IdList *L;

    if (D_001E2EAC->count >= 100)
        return 0;
    for (i = 0; i < D_001E2EAC->count; i++) {
        if (D_001E2EAC->ids[i] == id)
            return 0;
    }
    L = D_001E2EAC;
    n = L->count;
    k = n++;
    L->count = n;
    L->ids[k] = id;
    return 1;
}
