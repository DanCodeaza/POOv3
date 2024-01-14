object IndividualForm1: TIndividualForm1
  Left = 0
  Top = 0
  Caption = 'IndividualForm1'
  ClientHeight = 544
  ClientWidth = 893
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -12
  Font.Name = 'Segoe UI'
  Font.Style = []
  OnResize = FormResize
  TextHeight = 15
  object Next: TButton
    Left = 389
    Top = 488
    Width = 75
    Height = 25
    Caption = 'Next'
    TabOrder = 0
    OnClick = NextClick
  end
  object Previous: TButton
    Left = 159
    Top = 488
    Width = 75
    Height = 25
    Caption = 'Back'
    TabOrder = 1
    OnClick = PreviousClick
  end
  object Exit: TButton
    Left = 489
    Top = 488
    Width = 75
    Height = 25
    Caption = 'Exit'
    TabOrder = 2
    OnClick = ExitClick
  end
  object Button1: TButton
    Left = 255
    Top = 488
    Width = 25
    Height = 25
    Caption = '1'
    TabOrder = 3
  end
  object Button2: TButton
    Left = 303
    Top = 488
    Width = 25
    Height = 25
    Caption = '2'
    TabOrder = 4
    OnClick = Button2Click
  end
  object Button3: TButton
    Left = 343
    Top = 488
    Width = 25
    Height = 25
    Caption = '3'
    TabOrder = 5
    OnClick = Button3Click
  end
  object RadioGroup1: TRadioGroup
    Left = 104
    Top = 72
    Width = 400
    Height = 113
    Caption = 'What is your primary mode of transportation?'
    Items.Strings = (
      'Personal vehicle (gasoline/diesel)'
      'Electric/hybrid vehicle'
      'Public transportation'
      'Cycling'
      'Walking')
    TabOrder = 6
  end
  object RadioGroup2: TRadioGroup
    Left = 104
    Top = 207
    Width = 400
    Height = 106
    Caption = 'How often do you use air travel for long-distance trips?'
    Items.Strings = (
      'Frequently'
      'Occasionally'
      'Rarely'
      'Never')
    TabOrder = 7
  end
  object RadioGroup4: TRadioGroup
    Left = 104
    Top = 343
    Width = 400
    Height = 106
    Caption = 'What is the primary source of energy for your home?'
    Items.Strings = (
      'Grid electricity'
      'Solar power'
      'Wind power'
      'Other renewable sources'
      'I don'#39't know')
    TabOrder = 8
  end
end
