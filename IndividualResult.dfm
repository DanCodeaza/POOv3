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
    Left = 40
    Top = 32
    Width = 183
    Height = 15
    Caption = 'Your carbon individual footprint is:'
  end
  object Label2: TLabel
    Left = 240
    Top = 32
    Width = 6
    Height = 15
    Caption = 'x'
  end
  object Label3: TLabel
    Left = 272
    Top = 32
    Width = 53
    Height = 15
    Caption = 'kg of CO2'
  end
  object Label4: TLabel
    Left = 40
    Top = 64
    Width = 128
    Height = 15
    Caption = 'You are amoung the top'
  end
  object Label5: TLabel
    Left = 189
    Top = 64
    Width = 6
    Height = 15
    Caption = 'x'
  end
  object Label6: TLabel
    Left = 212
    Top = 64
    Width = 167
    Height = 15
    Caption = '% of the most polluting people.'
  end
  object Label7: TLabel
    Left = 40
    Top = 136
    Width = 34
    Height = 15
    Caption = 'Label7'
  end
  object Label8: TLabel
    Left = 40
    Top = 531
    Width = 101
    Height = 15
    Caption = 'Give us a feedback:'
  end
  object Exit: TButton
    Left = 696
    Top = 96
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 0
    OnClick = ExitClick
  end
  object Menu: TButton
    Left = 720
    Top = 176
    Width = 75
    Height = 25
    Caption = 'Back to menu'
    TabOrder = 1
    OnClick = MenuClick
  end
  object FeedBack: TMemo
    Left = 40
    Top = 568
    Width = 705
    Height = 265
    Lines.Strings = (
      'FeedBack')
    TabOrder = 2
  end
  object ProgressBar1: TProgressBar
    Left = 38
    Top = 101
    Width = 243
    Height = 21
    TabOrder = 3
  end
  object Button1: TButton
    Left = 56
    Top = 304
    Width = 225
    Height = 41
    Caption = 'Calculate your alimentar footprint'
    TabOrder = 4
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 56
    Top = 376
    Width = 225
    Height = 41
    Caption = 'Calculate your house footprint'
    TabOrder = 5
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 760
    Top = 808
    Width = 75
    Height = 25
    Caption = 'Submit'
    TabOrder = 6
    OnClick = Button3Click
  end
end
