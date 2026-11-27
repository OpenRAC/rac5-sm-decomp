/* MEMCARD_SetHardcoreModeBit__FUib 0x01E62848 -- clears, then sets from the boolean argument, bit 0 of a slot header flag byte. */
typedef struct {
    unsigned int word0;
    unsigned char byte4;
    unsigned int word8;
    unsigned int wordC;
    unsigned char date[3];
    unsigned char flags;
} tMEMCARD_SLOT_HEADER;

typedef struct {
    unsigned char unknown[0x68];
    tMEMCARD_SLOT_HEADER headers[1];
} tMEMCARD_REGION;

extern tMEMCARD_REGION memcard_region;

void MEMCARD_SetHardcoreModeBit__FUib(unsigned int slot, int enabled)
{
    unsigned char f;
    int v;

    memcard_region.headers[slot].flags &= ~1;
    f = memcard_region.headers[slot].flags;
    v = f | 1;
    if (!enabled)
        v = f;
    memcard_region.headers[slot].flags = v;
}
