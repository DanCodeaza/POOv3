object IndividualFormResult: TIndividualFormResult
  Left = 0
  Top = 0
  Caption = 'IndividualFormResult'
  ClientHeight = 1018
  ClientWidth = 895
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnActivate = FormActivate
  OnResize = FormResize
  TextHeight = 15
  object Label1: TLabel
    Left = 56
    Top = 56
    Width = 157
    Height = 15
    Caption = 'Your carbon feed footprint is :'
  end
  object Label4: TLabel
    Left = 232
    Top = 56
    Width = 6
    Height = 15
    Caption = 'x'
  end
  object Label7: TLabel
    Left = 56
    Top = 160
    Width = 3
    Height = 15
    WordWrap = True
  end
  object Label8: TLabel
    Left = 287
    Top = 56
    Width = 53
    Height = 15
    Caption = 'kg of CO2'
  end
  object Label6: TLabel
    Left = 64
    Top = 188
    Width = 689
    Height = 15
    Caption = 
      'Not eco Friendly          |    You can do better     |     You a' +
      're on the  good path     |     You are  good with the  plantet  ' +
      '   |     Eco-Friendly'
  end
  object Button1: TButton
    Left = 56
    Top = 304
    Width = 225
    Height = 41
    Caption = 'Calculate your individual footprint'
    TabOrder = 0
  end
  object Button2: TButton
    Left = 56
    Top = 376
    Width = 225
    Height = 41
    Caption = 'Calculate your house footprint'
    TabOrder = 1
    OnClick = Button2Click
  end
  object Exit: TButton
    Left = 820
    Top = 184
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 2
    OnClick = ExitClick
  end
  object ProgressBar1: TProgressBar
    Left = 56
    Top = 117
    Width = 697
    Height = 50
    TabOrder = 3
  end
  object Menu: TButton
    Left = 712
    Top = 304
    Width = 85
    Height = 25
    Caption = 'Back to menu'
    TabOrder = 4
    OnClick = MenuClick
  end
end
