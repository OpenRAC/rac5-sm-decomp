/* MEMCARD_SetHeaderDetail: stores the four detail values of one memcard slot header. */
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

void MEMCARD_SetHeaderDetail__FUiUiUiUiUi(unsigned int slot, unsigned int a,
                                          unsigned int b, unsigned int c,
                                          unsigned int d) {
    memcard_region.headers[slot].word0 = a;
    memcard_region.headers[slot].byte4 = b;
    memcard_region.headers[slot].word8 = c;
    memcard_region.headers[slot].wordC = d;
}