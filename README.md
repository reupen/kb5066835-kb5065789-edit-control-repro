# KB5066835 and KB5065789 Win32 edit control breakage repro

> [!NOTE]  
> This bug was fixed in the [KB5067036 preview update](https://support.microsoft.com/en-gb/topic/october-28-2025-kb5067036-os-builds-26200-7019-and-26100-7019-preview-ec3da7dc-63ba-4b1d-ac41-cf2494d2123a#id0ebdj=normal_rollout) released on 28 October 2025.

This project is a simple repro for how KB5065789 and KB5066835 break multiline Win32 
edit controls in tabbed dialogue boxes that use `EnableThemeDialogTexture()` with the
`ETDT_ENABLETAB` flag (something that has worked for decades).

https://github.com/user-attachments/assets/3e9d41eb-3516-458a-9965-a696c44601ac

To reproduce the problem, build `kb5066835-kb5065789-edit-control-repro.sln` with
Visual Studio 2022, run `kb5066835-kb5065789-edit-control-repro.exe` from the build
output directory, and type in the edit box as in the screen recording above.
