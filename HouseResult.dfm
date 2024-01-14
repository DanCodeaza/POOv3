object HouseFormResult: THouseFormResult
  Left = 0
  Top = 0
  Caption = 'HouseFormResult'
  ClientHeight = 442
  ClientWidth = 628
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Exit: TButton
    Left = 464
    Top = 336
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 0
    OnClick = ExitClick
  end
  object Menu: TButton
    Left = 383
    Top = 336
    Width = 75
    Height = 25
    Caption = 'Back to menu'
    TabOrder = 1
    OnClick = MenuClick
  end
end
