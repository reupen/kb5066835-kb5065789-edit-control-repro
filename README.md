# KB5066835 and KB5065789 Win32 edit control breakage repro

This project is a simple repro for how KB5065789 and KB5066835 break multiline Win32 
edit controls in tabbed dialogue boxes that use `EnableThemeDialogTexture()` with the
`ETDT_ENABLETAB` flag (something that has worked for decades).

https://github.com/user-attachments/assets/3e9d41eb-3516-458a-9965-a696c44601ac

To reproduce the problem, build `kb5066835-kb5065789-edit-control-repro.sln` with
Visual Studio 2022, run `kb5066835-kb5065789-edit-control-repro.exe` from the build
output directory, and type in the edit box as in the screen recording above.
