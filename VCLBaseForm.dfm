object Form14: TForm14
  Left = 0
  Top = 0
  Caption = 'VCL Console Base - Dec 2024'
  ClientHeight = 441
  ClientWidth = 609
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  DesignSize = (
    609
    441)
  TextHeight = 15
  object MemoDebug: TMemo
    Left = 8
    Top = 8
    Width = 505
    Height = 417
    Anchors = [akLeft, akTop, akBottom]
    Lines.Strings = (
      'Console only works in Modern 64 bit'
      ''
      
        '"The Windows 64-bit Modern C++ toolchain (bcc64x) is an entirely' +
        ' new implementation of the '
      
        'Clang extensions and C++Buidler features with new, platform-stan' +
        'dards technology. Besides, '
      'it is our recommended C++ toolchain for use.'
      
        'It uses the LLVM libc++ STL, a custom C++ RTL, the Windows UCRT ' +
        'for the C runtime, and '
      'emits object files in COFF64 format with PDB debug info."'
      ''
      'BCC64X is a RAD Studio C++ compiler for 64-bit Windows (Modern).'
      'BCC64X is based on Clang. ')
    TabOrder = 0
    ExplicitHeight = 392
  end
  object BN_Close: TButton
    Left = 528
    Top = 88
    Width = 75
    Height = 57
    Caption = 'Close'
    TabOrder = 1
    OnClick = BN_CloseClick
  end
  object BN_Clear: TButton
    Left = 528
    Top = 167
    Width = 75
    Height = 25
    Caption = 'Clear'
    TabOrder = 2
    OnClick = BN_ClearClick
  end
  object BN_Start: TButton
    Left = 528
    Top = 8
    Width = 75
    Height = 25
    Caption = 'Start'
    TabOrder = 3
    OnClick = BN_StartClick
  end
end
