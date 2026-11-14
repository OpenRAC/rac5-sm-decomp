/* HUDOFFSET_GetOffset__FUi -- returns the HUD offset entry of an element for the current screen mode. */
extern int D_01EF5930;
extern char sg_HudOffsetData[];

void *HUDOFFSET_GetOffset__FUi(unsigned int element) {
    return sg_HudOffsetData + D_01EF5930 * 0x50 + element * 8;
}
