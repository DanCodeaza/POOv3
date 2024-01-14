object IndividualForm1: TIndividualForm1
  Left = 0
  Top = 0
  Caption = 'IndividualForm1'
  ClientHeight = 433
  ClientWidth = 622
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  TextHeight = 15
  object Next: TButton
    Left = 456
    Top = 312
    Width = 75
    Height = 25
    Caption = 'Next'
    TabOrder = 0
    OnClick = NextClick
  end
  object Previous: TButton
    Left = 359
    Top = 312
    Width = 75
    Height = 25
    Caption = 'Back'
    TabOrder = 1
    OnClick = PreviousClick
  end
  object Exit: TButton
    Left = 545
    Top = 312
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 2
    OnClick = ExitClick
  end
  object Button1: TButton
    Left = 391
    Top = 376
    Width = 25
    Height = 25
    Caption = '1'
    TabOrder = 3
  end
  object Button2: TButton
    Left = 431
    Top = 376
    Width = 25
    Height = 25
    Caption = '2'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 479
    Top = 376
    Width = 25
    Height = 25
    Caption = '3'
    TabOrder = 5
    OnClick = Button3Click
  end
end
