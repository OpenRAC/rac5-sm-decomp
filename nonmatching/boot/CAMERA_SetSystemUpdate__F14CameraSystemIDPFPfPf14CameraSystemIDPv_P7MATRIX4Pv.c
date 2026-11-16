/*
 * CAMERA_SetSystemUpdate__F14CameraSystemIDPFPfPf14CameraSystemIDPv_P7MATRIX4Pv
 * USA boot (SCUS_976.15), retail 0x01E68AB0, body 52 bytes (0x01E68AB0..0x01E68AE4).
 *
 * Registers the update callback and its context for one camera system: the
 * per-system record is 0x30 bytes, the callback is stored at +0x90, the context
 * at +0x94 and the word at +0xB0 is cleared first. The form is the one of the
 * accepted level twins (src/levels, same symbol), with the boot's own camera
 * pointer `g_camera` as named by src/boot/CAMERA_CommitToDisplay__Fv.c.
 *
 * Profile: pinned chain (cpp, cc1 -quiet -O2 -G0, as), built by
 * tools/compiler/build_gnu_ee.sh; those rebuilt binaries are not hash-identical
 * to the pins. Measured 13 November 2026: the compiled .text is 52 bytes and
 * equals the retail body once its four relocations are resolved to the retail
 * address of `g_camera`.
 *
 * Exact but unaccepted witness. Missing: the boundary review of the remaining
 * 28 bytes of the 80-byte next-label interval (they follow the normal return of
 * this body and are not claimed here), the campaign integration and the
 * qualifying gate with pinned tools.
 */
extern char *g_camera; /* 0x01EDE330 */

void CAMERA_SetSystemUpdate__F14CameraSystemIDPFPfPf14CameraSystemIDPv_P7MATRIX4Pv(int id, void *update, void *context)
{
    int offset = id * 0x30;
    *(int *)(g_camera + offset + 0xB0) = 0;
    *(int *)(g_camera + offset + 0x90) = (int)update;
    *(int *)(g_camera + offset + 0x94) = (int)context;
}
