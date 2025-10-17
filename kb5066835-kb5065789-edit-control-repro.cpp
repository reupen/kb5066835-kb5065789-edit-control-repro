#include "framework.h"
#include "kb5066835-kb5065789-edit-control-repro.h"

INT_PTR CALLBACK EditDialogProc(HWND hwnd, UINT message, WPARAM wparam, LPARAM lparam)
{
    switch (message)
    {
    case WM_INITDIALOG: {
        EnableThemeDialogTexture(hwnd, ETDT_ENABLETAB);
        const auto edit_hwnd = GetDlgItem(hwnd, IDC_EDIT);
        SetWindowText(edit_hwnd, L"Some initial \ntext");
        SetFocus(edit_hwnd);
        return FALSE;
    }
    case WM_CLOSE:
        EndDialog(hwnd, 1);
        return TRUE;
    }

    return FALSE;
}

int APIENTRY wWinMain(HINSTANCE hinstance, HINSTANCE prev_hinstance, LPWSTR lp_cmd_line, int show_cmd)
{
    INITCOMMONCONTROLSEX iccex{};
    iccex.dwSize = sizeof(iccex);
    iccex.dwICC = ICC_STANDARD_CLASSES;
    InitCommonControlsEx(&iccex);

    DialogBox(hinstance, MAKEINTRESOURCE(IDD_EDITDIALOG), nullptr, EditDialogProc);

    return 1;
}
