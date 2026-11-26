/* Boot 0x01E68A78 -- selects one of the 0x118-byte camera records as the current camera. */
typedef struct {
    unsigned char bytes[0x118];
} tCAMERA;

extern tCAMERA D_01F61BC0[];
extern tCAMERA *camera_current;

void CAMERA_SetCurrentCamera__FUi(unsigned int index) {
    camera_current = &D_01F61BC0[index];
}
