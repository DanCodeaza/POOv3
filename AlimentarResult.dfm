object AlimentarFormResult: TAlimentarFormResult
  Left = 0
  Top = 0
  Caption = 'AlimentarFormResult'
  ClientHeight = 433
  ClientWidth = 622
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
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
    Top = 176
    Width = 124
    Height = 15
    Caption = 'You are among the top '
  end
  object Label3: TLabel
    Left = 208
    Top = 176
    Width = 157
    Height = 15
    Caption = ' of the most polluting people.'
  end
  object Button1: TButton
    Left = 56
    Top = 256
    Width = 225
    Height = 41
    Caption = 'Calculate your individual footprint'
    TabOrder = 0
  end
  object Button2: TButton
    Left = 56
    Top = 312
    Width = 225
    Height = 41
    Caption = 'Calculate your house footprint'
    TabOrder = 1
  end
  object Exit: TButton
    Left = 56
    Top = 376
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 2
    OnClick = ExitClick
  end
  object ProgressBar1: TProgressBar
    Left = 56
    Top = 125
    Width = 193
    Height = 21
    TabOrder = 3
  end
end
