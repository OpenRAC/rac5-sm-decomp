/* LEVEL_07/0x1000 */
extern char D_002411E0[];
extern char *D_00203548;
void CAMERA_SetCurrentCamera__FUi(int index) { D_00203548 = D_002411E0 + index * 0x118; }
