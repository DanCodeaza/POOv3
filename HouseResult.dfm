object HouseFormResult: THouseFormResult
  Left = 0
  Top = 0
  Caption = 'HouseFormResult'
  ClientHeight = 737
  ClientWidth = 858
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
  object Label4: TLabel
    Left = 232
    Top = 56
    Width = 6
    Height = 15
    Caption = 'x'
  end
  object Label8: TLabel
    Left = 287
    Top = 56
    Width = 53
    Height = 15
    Caption = 'kg of CO2'
  end
  object Label2: TLabel
    Left = 56
    Top = 88
    Width = 124
    Height = 15
    Caption = 'You are among the top '
  end
  object Label5: TLabel
    Left = 190
    Top = 88
    Width = 6
    Height = 15
    Caption = 'x'
  end
  object Label3: TLabel
    Left = 208
    Top = 88
    Width = 167
    Height = 15
    Caption = '% of the most polluting people.'
  end
  object Label6: TLabel
    Left = 64
    Top = 427
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
  object ProgressBar1: TProgressBar
    Left = 56
    Top = 117
    Width = 309
    Height = 21
    TabOrder = 2
  end
  object Button1: TButton
    Left = 56
    Top = 304
    Width = 225
    Height = 41
    Caption = 'Calculate your individual footprint'
    TabOrder = 3
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 56
    Top = 376
    Width = 225
    Height = 41
    Caption = 'Calculate your alimentar footprint'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Feedback: TMemo
    Left = 56
    Top = 448
    Width = 553
    Height = 233
    Lines.Strings = (
      'Feedback')
    TabOrder = 5
  end
  object Button3: TButton
    Left = 615
    Top = 656
    Width = 75
    Height = 25
    Caption = 'Submit'
    TabOrder = 6
    OnClick = Button3Click
  end
end
