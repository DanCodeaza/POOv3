object AlimentarFormResult: TAlimentarFormResult
  Left = 0
  Top = 0
  Caption = 'AlimentarFormResult'
  ClientHeight = 744
  ClientWidth = 1044
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnResize = FormResize
  TextHeight = 15
  object Label1: TLabel
    Left = 56
    Top = 56
    Width = 157
    Height = 15
    Caption = 'Your carbon feed footprint is :'
  end
  object Label2: TLabel
    Left = 56
    Top = 88
    Width = 124
    Height = 15
    Caption = 'You are among the top '
  end
  object Label3: TLabel
    Left = 208
    Top = 88
    Width = 167
    Height = 15
    Caption = '% of the most polluting people.'
  end
  object Label4: TLabel
    Left = 232
    Top = 56
    Width = 6
    Height = 15
    Caption = 'x'
  end
  object Label5: TLabel
    Left = 190
    Top = 88
    Width = 6
    Height = 15
    Caption = 'x'
  end
  object Label6: TLabel
    Left = 64
    Top = 443
    Width = 94
    Height = 15
    Caption = 'Give us Feedback:'
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
    Left = 824
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
    Width = 309
    Height = 21
    TabOrder = 3
  end
  object Feedback: TMemo
    Left = 64
    Top = 464
    Width = 553
    Height = 233
    Lines.Strings = (
      'Feedback')
    TabOrder = 4
  end
  object Menu: TButton
    Left = 648
    Top = 192
    Width = 85
    Height = 25
    Caption = 'Back to menu'
    TabOrder = 5
    OnClick = MenuClick
  end
  object Button3: TButton
    Left = 631
    Top = 672
    Width = 75
    Height = 25
    Caption = 'Submit'
    TabOrder = 6
    OnClick = Button3Click
  end
end
