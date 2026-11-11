/* Forward to MEMCARD_GetSlotHeaderDetail__FUi. */
typedef struct { unsigned char bytes[20]; } tMEMCARD_SLOT_HEADER;

extern tMEMCARD_SLOT_HEADER *MEMCARD_GetSlotHeaderDetail__FUi(unsigned int slot);

tMEMCARD_SLOT_HEADER *func_0212D0(unsigned int slot)
{
    return MEMCARD_GetSlotHeaderDetail__FUi(slot);
}
